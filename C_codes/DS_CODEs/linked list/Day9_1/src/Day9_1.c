/*
 ============================================================================
 Name        : Day9_1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int bkid;
	char bkname[20];
	float price;
}BOOK;

typedef struct node
{
	struct node *prev;
	BOOK data;
	struct node *next;
}NODE;

typedef struct
{
	NODE *head;
	NODE *tail;
}LIST;
void accept_book_details(BOOK *book)
{
	printf("\n Specify Book id");
	scanf("%d",&book->bkid);

	printf("\n Specify Book name");
	scanf("%s",book->bkname);

	printf("\n Specify Book price");
	scanf("%f",&book->price);
}

void display_book_details(const BOOK *book)
{
	printf("%d %s %f \n",book->bkid,book->bkname,book->price);
}

void init_list(LIST *list)
{
	list->head=NULL;
	list->tail=NULL;
}

NODE * create_node()
{
	NODE *temp;
	temp = (NODE *) malloc(sizeof(NODE));
	temp->next=NULL;
	temp->prev=NULL;
	return temp;
}
void add_element_at_first(LIST *list,const BOOK *book)
{
	NODE *newnode;
	newnode=create_node();
	newnode->data=*book;	//one book data is  copied to another book data location
	if(list->head==NULL)
	{
		list->head=newnode;
		list->tail=newnode;
	}
	else
	{
		newnode->next=list->head;
		list->head->prev=newnode;
		list->head=newnode;
	}
}
void add_element_at_last(LIST *list,const BOOK *book)
{
	NODE *newnode;
	newnode=create_node();
	newnode->data=*book;	//one book data is  copied to another book data location
	if(list->head==NULL)
	{
		list->head=newnode;
		list->tail=newnode;
	}
	else
	{
		newnode->prev=list->tail;
		list->tail->next=newnode;
		list->tail=newnode;
	}
}

void traverse_list(const LIST *list)
{
	if(list->head==NULL && list->tail==NULL)
	{
		printf("\n list is empty");
		return ;
	}
	NODE *trav=list->head;
	printf("\n Traverse in Forward Direction\n");
	while(trav!=NULL)
	{
		display_book_details(&trav->data); //passing addres of book type data location
		trav=trav->next;
	}
	printf("\n Traverse in Backward Direction\n");
	trav=list->tail;
	while(trav!=NULL)
	{
		display_book_details(&trav->data); //passing addres of book type data location
		trav=trav->prev;
	}
}
void add_element_at_pos(LIST *list,const BOOK *book,int pos)
{
	NODE *trav,*newnode;
	int k;
	if(pos==1)
		add_element_at_first(list,book);
	else if(pos==count_nodes(list)+1)
		add_element_at_last(list,book);
	else
	{
		newnode=create_node();
		newnode->data=*book;
		trav=list->head;
		k=1;
		while(k < pos-1)
		{
			trav=trav->next;
			k++;
		}
		newnode->prev=trav;
		newnode->next=trav->next;
		trav->next->prev=newnode;
		trav->next=newnode;
	}
}
void del_element_from_first(LIST *list)
{
	NODE *temp;
	temp=list->head;
	list->head=list->head->next; // dettached first node from ll and second node becomes first node
	if(list->head==NULL)
	{
		list->tail=NULL;
	}
	else
		list->head->prev=NULL;

	free(temp);
	temp=NULL;
}
void del_element_from_last(LIST *list)
{
	NODE *temp;
	temp=list->tail;
	if(list->tail==list->head)
	{
		list->head=NULL;
		list->tail=NULL;
	}
	else
	{
		list->tail->prev->next=NULL;
		list->tail=list->tail->prev;
	}
	free(temp);
	temp=NULL;
}

void search_book(LIST *list,int bkid,int *pos,BOOK *data)
{
	NODE *trav=list->head;
	int cnt=0;
	while(trav!=NULL)
	{
		if(trav->data.bkid == bkid)
		{
			*data=trav->data;
			*pos=cnt+1;
			break;
		}
		cnt++;
		trav=trav->next;
	}
}






int main(void) {
	LIST list;
	BOOK book;

	init_list(&list);

	accept_book_details(&book);
	add_element_at_first(&list,&book);

	accept_book_details(&book);
	add_element_at_last(&list,&book);

	accept_book_details(&book);
	add_element_at_last(&list,&book);

	accept_book_details(&book);
	add_element_at_last(&list,&book);

	accept_book_details(&book);
	add_element_at_pos(&list,&book,3);

	traverse_list(&list);
	int pos;
	search_book(&list,101,&pos,&book);


	return EXIT_SUCCESS;
}
