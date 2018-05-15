/*
 ============================================================================
 Name        : Day8_1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

typedef enum {EXIT,ADDFIRST,ADDLAST,ADDATPOS,DELFIRST,DELLAST,DELFROMPOS,REVERSE,TRAVERSE} MENUOPERATIONS;

typedef struct node
{
	int data;
	struct node *next;	//self referntial structure
}NODE;

NODE *head=NULL;

NODE * create_node()
{
	NODE *temp = (NODE *)malloc(sizeof(NODE));
	temp->next=NULL;
	return temp;
}
void add_element_at_first(int data)
{
	NODE *trav;
	//1. request memory for new element (node)
	NODE *newnode = create_node();
	//2. assign data part
	newnode->data=data;
	//3. attach newly created node in linked list
	if(head==NULL)//3.1 list is empty
	{
		head = newnode;
		newnode->next=head;
	}
	else
	{
		trav=head;
		while(trav->next!=head)
		{
			trav=trav->next;
		}
		newnode->next=head;
		head=newnode;
		trav->next=head;
	}//3.2 list is ready
}
void add_element_at_last(int data)
{
	NODE *trav=NULL;
	//1. request memory for new element (node)
	NODE *newnode = create_node();
	//2. assign data part
	newnode->data=data;
	//3. attach newly created node in linked list
	if(head==NULL)//3.1 list is empty
	{
		head = newnode;
	}
	else
	{
		trav=head;
		while(trav->next!=head)
		{
			trav=trav->next;
		}//traverse till not reach to last node
		trav->next=newnode;//attach nn next to present last node next
	}//3.2 list is ready
	newnode->next=head;
}

int count_nodes()
{
	NODE *trav=head;
	int cnt=0;
	do //is any valid node to visit then enter loop
	{
		cnt++;
		trav=trav->next;	//will able to move trav pointer on next node
	}while(trav!=head);
	return cnt;
}
void add_element_at_given_pos(int data,int pos)
{
	NODE *newnode,*trav;
	int k;
	if(pos==1)
		add_element_at_first(data);
	else if(pos==(count_nodes()+1))
		add_element_at_last(data);
	else
	{
		newnode = create_node();
		newnode->data=data;
		//attach element at given position
		trav=head;
		k=1;
		while(k < pos-1)
		{
			trav=trav->next;
			k++;	//k will indicate position of current node where trav is pointing to
		}//after traverse trav pointer will point to node next to which nn to be attached

		newnode->next=trav->next;
		trav->next=newnode;
	}
}
void accept_data(int *data)
{
	printf("\n specify data for newnode");
	scanf("%d",data);
}


MENUOPERATIONS menu_choice()
{
	MENUOPERATIONS mchoice;
	printf("\n 1. Add element at first position");
	printf("\n 2. Add element at last position");
	printf("\n 3. Add element at given position");
	printf("\n 4. Delete element from first position");
	printf("\n 5. Delete element from last position");
	printf("\n 6. Delete element from given position");
	printf("\n 7. Reverse Linked List");
	printf("\n 8. Traverse List");
	scanf("%d",&mchoice);
	return mchoice;
}

void traverse_list()
{

	NODE *trav=head;
	if(trav==NULL)
	{
		printf("\n List is empty............");
		return ;
	}

	do //is any valid node to visit then enter loop
	{
		printf("%d->",trav->data);	//will able to print data
		trav=trav->next;	//will able to move trav pointer on next node
	}while(trav!=head);
}


void del_element_from_first()
{
	NODE *temp,*trav=head;
	while(trav->next!=head)
		trav=trav->next;

	temp=head;
	if(trav==head)
	{
		head=NULL;
	}
	else
	{
		head=head->next; // dettached first node from ll and second node becomes first node
		trav->next=head;
	}
	free(temp);
	temp=NULL;
}

void del_element_from_last()
{
	NODE *trav=head,*prev=NULL;

	while(trav->next!=head)
	{
		prev=trav;
		trav=trav->next;
	}
	if(prev==NULL)//concludes list is having only one node about to delete
		head=NULL;	//dettach node from linked list and make list empty
	else
		prev->next=head;

	free(trav);	//deallocate memory
	trav=NULL;
}

void delete_element_from_pos(int pos)
{
	NODE *trav,*temp;
	int k=1;
	if(pos==1)
		del_element_from_first();
	else if(pos==count_nodes())
		del_element_from_last();
	else
	{
		trav=head;
		while(k < pos-1)
		{
			trav=trav->next;
			k++;
		}//trav is on node next which node be deleted
		temp=trav->next;
		trav->next=temp->next;
		free(temp);
		temp=NULL;
	}
}

void free_list()
{
	while(head!=NULL)
	{
		del_element_from_first();
	}

}//release memory received dynamically for  all nodes


int main(void)
{
	int data,pos;
	MENUOPERATIONS mchoice;

	while((mchoice=menu_choice())!=EXIT)
	{
		switch(mchoice)
		{
			case ADDFIRST:
							accept_data(&data);
							add_element_at_first(data);
							break;
			case ADDLAST:
							accept_data(&data);
							add_element_at_last(data);
							break;
			case ADDATPOS:
							printf("\n specify position for new element");
							scanf("%d",&pos);
							if(pos<=0 || pos > (count_nodes()+1))
								printf("\n invalid position entered");
							else
							{
								accept_data(&data);
								add_element_at_given_pos(data,pos);
							}
							break;
			case DELFIRST:
							del_element_from_first();
							break;
			case DELLAST:
							del_element_from_last();
							break;
			case DELFROMPOS:
							printf("\n specify position to delete element from");
							scanf("%d",&pos);
							if(pos<=0 || pos > count_nodes())
								printf("\n invalid position entered");
							else
								delete_element_from_pos(pos);
							break;
			case TRAVERSE:
							printf("\n Traverse in Forward Direction \n");
							traverse_list();
							break;
		}
	}
	free_list();
	return EXIT_SUCCESS;
}
