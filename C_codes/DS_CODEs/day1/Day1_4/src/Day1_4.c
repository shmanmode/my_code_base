/*
 ============================================================================
 Name        : Day1_4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int add(int n1,int n2)
{
	return n1+n2;
}
int sub(int n1,int n2)
{
	return n1-n2;
}
int mul(int n1,int n2)
{
	return n1*n2;
}

int operate(int n1,int n2,int (*fnptr)(int,int))
{
	return (*fnptr)(n1,n2);
}

int main(void) {
	int x=3,y=5,ans;

	ans = operate(x,y,add);
	printf("\n answer = %d",ans);

	return EXIT_SUCCESS;
}









