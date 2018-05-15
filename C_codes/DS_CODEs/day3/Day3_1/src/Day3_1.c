/*
 ============================================================================
 Name        : Day3_1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 20
#define TRUE 1
#define FALSE 0

typedef  enum{EXIT,PUSHELEMENT,POPELEMENT,PEEKELEMENT} MENUOPERATIONS;
typedef char ELEMENT;
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
BOOL is_full(const STACK *stack)
{
	return stack->top ==SIZE-1 ? TRUE : FALSE;
}
void push_element(STACK *stack,const ELEMENT *ele)
{
	stack->top++;//manage top before you add element
	stack->eles[stack->top]=*ele;//actually push element on stack at specific index location
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

BOOL is_operator(char op)
{
	if(op=='+' || op=='-' || op=='/' || op=='*')
		return TRUE;
	else
		return FALSE;
}

BOOL is_operand(char op)
{
	if(op>=48 && op<=57)
		return TRUE;
	else
		return FALSE;
}

int calculate(int n1,int n2,char opr)
{
	int result;
	switch(opr)
	{
		case '+':
				result= n1+n2;
				break;
		case '-':
				result= n1-n2;
				break;
		case '/':
				result= n1/n2;
				break;
		case '*':
				result= n1*n2;
				break;
	}
	return result;
}

int postfix_evaluation(char *postfix)
{
	STACK stack;
	init_stack(&stack);
	int i=0,ans,n1,n2;
	while(postfix[i]!='\0')
	{
		if(is_operand(postfix[i]))
		{
			if(!is_full(&stack))
				push_element(&stack,&postfix[i]);
		}
		else if(is_operator(postfix[i]))
			{
				if(!is_empty(&stack))
				{
				n2 = peek_element(&stack)-48;
				pop_element(&stack);
				}
				if(!is_empty(&stack))
				{
				n1 = peek_element(&stack)-48;

				pop_element(&stack);
				}
				char p=calculate(n1,n2,postfix[i]);
				if(!is_full(&stack))
					push_element(&stack,&p);
			}

		i++;
	}
	if(!is_empty(&stack))
	{
		ans = peek_element(&stack);
		pop_element(&stack);
	}
	return ans;
}

int main()
{
	char postfix[80];

	printf("\n Please specify postfix string to evaluate");
	gets(postfix);

	int result = postfix_evaluation(postfix);

	printf("\n Result = %d",result);
}












