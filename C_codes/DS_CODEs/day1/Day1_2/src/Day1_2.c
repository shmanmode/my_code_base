/*
 ============================================================================
 Name        : Day1_2.c
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

int main(void) {
	int (*fnptr)(int,int);//fnptr is a pointer to a block which takes first argumenyt  as int and second argument is also as int and in return it returns int
	int x=3,y=5,ans;

	ans= add(x,y);
	printf("\n addition =%d",ans);

	fnptr=add;
	ans=(*fnptr)(x,y);
	printf("\n addition =%d",ans);


	fnptr=sub;//assigning address of sub function
	ans=(*fnptr)(x,y);	//via ptr we calling function
	printf("\n difference =%d",ans);


	fnptr=mul;
	ans=(*fnptr)(x,y);
	printf("\n product =%d",ans);

	return EXIT_SUCCESS;
}









