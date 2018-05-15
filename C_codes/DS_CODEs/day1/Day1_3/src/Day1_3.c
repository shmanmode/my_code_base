/*
 ============================================================================
 Name        : Day1_3.c
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
	int (*fnptr[3])(int,int);//fnptr is a pointer to a block which takes first argumenyt  as int and second argument is also as int and in return it returns int
	int x=3,y=5,ans;

	ans= add(x,y);
	printf("\n addition =%d",ans);

	fnptr[0]=add;
	ans=(*fnptr[0])(x,y);
	printf("\n addition =%d",ans);


	fnptr[1]=sub;//assigning address of sub function
	ans=(*fnptr[1])(x,y);	//via ptr we calling function
	printf("\n difference =%d",ans);


	fnptr[2]=mul;
	ans=(*fnptr[2])(x,y);
	printf("\n product =%d",ans);

	printf("\n %u add=%u",fnptr[0],add);
	printf("\n &fnptr[0]=%u",&fnptr[0]);
	printf("\n &fnptr[1]=%u",&fnptr[1]);
	printf("\n &fnptr[2]=%u",&fnptr[2]);
	return EXIT_SUCCESS;
}









