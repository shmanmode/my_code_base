/*
 ============================================================================
 Name        : Day1_1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void showmessage()
{
	printf("\n inside showmessage()");
}

void showerror()
{
	printf("\n inside showerror()");
}
int main(void)
{
	printf("\n main() address %u",main);
	printf("\n showmessage() address %u",showmessage);
	printf("\n showerror() address %u",showerror);

	void (*fnptr)(); //fnptr is a pointer to block which points to such function which do not take any argument and it do not return anything
	printf("\n size = %u",sizeof(fnptr));

	fnptr=showmessage;

	showmessage(); //original way of calling function

	(*fnptr)(); //calling function via pointer to function

	fnptr=showerror;
	(*fnptr)(); //calling function via pointer to function


	return EXIT_SUCCESS;
}









