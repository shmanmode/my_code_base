/*
 ============================================================================
 Name        : Day2_1.c
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

typedef  enum{EXIT,PUSHELEMENT,POPELEMENT,PEEKELEMENT} MENUOPERATIONS;
typedef int ELEMENT;
typedef int BOOL;

typedef struct
{
	ELEMENT eles[SIZE];
	int top;
}STACK;

void init_stack(STACK *stack)
{
	stack->top=-1;
}
MENUOPERATIONS menu_choice()
{
	MENUOPERATIONS mchoice;
	printf("\n 0. Exit");
	printf("\n 1. Push Element on Stack");
	printf("\n 2. Pop element From Stack ");
	printf("\n 3. Peek Element from Stack");
	scanf("%d",&mchoice);
	return mchoice;
}
BOOL is_full(const STACK *stack)
{
	return stack->top ==SIZE-1 ? TRUE : FALSE;
}
void push_element(STACK *stack,const ELEMENT *ele)
{
	stack->top++;//manage top before you add element
	stack->eles[stack->top]=*ele;//actually push element on stack at specific index location
}
void accept_element(ELEMENT *ele)
{
	printf("\n specify element to be pushed");
	scanf("%d",ele);
}
BOOL is_empty(const STACK *stack)
{	//1. initially stack is empty when no single element added on stack
	//2. after performing operations stackis going to empty
	return stack->top==-1 ? TRUE : FALSE;
}
ELEMENT peek_element(STACK *stack)
{
	return stack->eles[stack->top];
}//retrieves top most element

void pop_element(STACK *stack)
{
	stack->top--;
}//removes top most element
int main(void) {
	STACK stack;
	ELEMENT ele;
	MENUOPERATIONS mchoice;
	init_stack(&stack);

	while((mchoice=menu_choice())!=EXIT)
	{
		switch(mchoice)
		{
			case PUSHELEMENT:
							if(is_full(&stack))
							{
								printf("\n Stack has reached to overflow state");
							}
							else
							{
									accept_element(&ele);
									push_element(&stack,&ele);
							}
							break;
			case POPELEMENT:
							if(is_empty(&stack))
							{
								printf("\n Stack has reached to underflow state");
							}
							else
							{
								ele= peek_element(&stack);
								pop_element(&stack);
								printf("\n Element :: %d",ele);
							}

							break;
			case PEEKELEMENT:
							if(is_empty(&stack))
							{
								printf("\n Stack has reached to underflow state");
							}
							else
							{
								ele= peek_element(&stack);
								printf("\n Element :: %d",ele);
							}
							break;
		}
	}

	return EXIT_SUCCESS;
}
