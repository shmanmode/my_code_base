/*
 ============================================================================
 Name        : Day5_1.c
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
		newnode->next=head;
		head=newnode;
	}//3.2 list is ready
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

	while(trav!=NULL) //is any valid node to visit then enter loop
	{
		printf("%d->",trav->data);	//will able to print data
		trav=trav->next;	//will able to move trav pointer on next node
	}

}
int main(void)
{
	int data;
	MENUOPERATIONS mchoice;

	while((mchoice=menu_choice())!=EXIT)
	{
		switch(mchoice)
		{
			case ADDFIRST:
							accept_data(&data);
							add_element_at_first(data);
							break;
			case TRAVERSE:
							traverse_list();
							break;
		}
	}
	return EXIT_SUCCESS;
}
