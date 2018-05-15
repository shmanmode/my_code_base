/*
 ============================================================================
 Name        : Day4_2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
#define TRUE 1
#define FALSE 0

typedef  enum{EXIT,ADDELEMENT,DELELEMENT,TRAVERSEQUEUE} MENUOPERATIONS;
typedef int ELEMENT;
typedef int BOOL;

typedef struct
{
	ELEMENT eles[SIZE];
	int rear,front;
}QUEUE;

void init_queue(QUEUE *queue)
{
	for(int i=0;i<SIZE;i++)
	{
		queue->eles[i]=-1;
	}//optional just to show graphical representation of queue
	queue->rear=-1;
	queue->front=-1;
}//no element is at front and no element is at rear Q is empty
MENUOPERATIONS menu_choice()
{
	MENUOPERATIONS mchoice;
	printf("\n 0. Exit");
	printf("\n 1. Add element in Queue");
	printf("\n 2. Delete Element From Queue");
	printf("\n 3. Traverse Queue");
	scanf("%d",&mchoice);
	return mchoice;
}
BOOL is_full(const QUEUE *queue)
{
	//1. keep on adding element till size-1 but no single element is deleted
	//2. after filling all elements till size -1 delete no. elements and add no. element case of Q full
	return (queue->rear ==SIZE-1 && queue->front==0) ||  \
			queue->rear+1 == queue->front \
			? TRUE : FALSE;
}
void add_element(QUEUE *queue,const ELEMENT *ele)
{
	if(queue->rear==SIZE-1)
		queue->rear=0;
	else
		queue->rear++;//manage rear before you add element
	queue->eles[queue->rear]=*ele;//actually push element on queue at specific index location
	if(queue->front==-1)
	{
		queue->front=0;
	}//the very first element added in queue so lets set it to front
}
void accept_element(ELEMENT *ele)
{
	printf("\n specify element to be pushed");
	scanf("%d",ele);
}
BOOL is_empty(const QUEUE *queue)
{	//1. initially queue is empty when no single element added on queue
	//2. after performing operations  queue is going to empty
	return queue->rear==-1 ? TRUE : FALSE;
}
ELEMENT peek_element(QUEUE *queue)
{
	return queue->eles[queue->front];
}//retrieves top most element

void delete_element(QUEUE *queue)
{	//delete element from front
	queue->eles[queue->front]=-1; //assume element is deleted
	if(queue->rear==queue->front)
	{
		queue->rear=-1;queue->front=-1;
	}//there was only one element which got deleted to reset queue
	else
	{
		if(queue->front==SIZE-1)
			queue->front=0;
		else
			queue->front++; //after delete decide which element will be at front
	}
}//removes top most element

void traverse_queue(const QUEUE *queue)
{
	for(int i=0;i<SIZE;i++)
	{
		printf("%4d",queue->eles[i]);
	}
	printf("\t rear=%d front=%d",queue->rear,queue->front);
}

int main(void) {
	QUEUE queue;
	ELEMENT ele;
	MENUOPERATIONS mchoice;
	init_queue(&queue);

	while((mchoice=menu_choice())!=EXIT)
	{
		switch(mchoice)
		{
			case ADDELEMENT:
							if(is_full(&queue))
							{
								printf("\n Queue has reached to overflow state");
							}
							else
							{
									accept_element(&ele);
									add_element(&queue,&ele);
							}
							break;
			case DELELEMENT:
							if(is_empty(&queue))
							{
								printf("\n Queue has reached to underflow state");
							}
							else
							{
								ele= peek_element(&queue);
								delete_element(&queue);
								printf("\n Element :: %d",ele);
							}
							break;
			case TRAVERSEQUEUE:
							traverse_queue(&queue);
							break;
		}
	}

	return EXIT_SUCCESS;
}
