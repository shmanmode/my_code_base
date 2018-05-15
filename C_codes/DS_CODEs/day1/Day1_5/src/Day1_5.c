/*
 ============================================================================
 Name        : Day1_5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int compare(const void *p1,const void *p2)
{
	int n1 = *(int *)p1;
	int n2 = *(int *)p2;
	return n1 > n2;//return *(int *)p1 > *(int *)p2
}

int main(void) {
	int arr[5]={45,23,41,33,21};
	printf("\n before sort\n");
	for(int i=0;i<5;i++)
	{
		printf("%4d",arr[i]);
	}

	qsort(arr,5,sizeof(int),compare);
	printf("\n after sort\n");
	for(int i=0;i<5;i++)
	{
		printf("%4d",arr[i]);
	}

	return EXIT_SUCCESS;
}
