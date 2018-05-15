/*
 ============================================================================
 Name        : Day1_6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include<string.h>
typedef struct
{
	int empno;
	char ename[20];
}EMP;

void selection_sort(void  *e,int nele,int size, int (*fnptr)(const void *,const void *));
int compare(const void *p1,const void *p2)
{
	EMP e1 = *(EMP *)p1;
	EMP e2 = *(EMP *)p2;
	return strcmp(e1.ename,e2.ename);
}

int main(void) {
	EMP e1[5]={{12,"smita"},{3,"nitin sir"},{21,"rahul"},{4,"nilesh"},{1,"sarang sir"}};

	printf("\n unSorted Order of employees\n");
	for(int i=0;i<5;i++)
	{
		printf("\n %d %s",e1[i].empno,e1[i].ename);
	}

//	qsort(e1,5,sizeof(EMP),compare);

	selection_sort(e1,5,sizeof(EMP),compare);

	printf("\n Sorted Order of employees by ename\n");
	for(int i=0;i<5;i++)
	{
		printf("\n %d %s",e1[i].empno,e1[i].ename);
	}

	return EXIT_SUCCESS;
}



void selection_sort(void  *e,int nele,int size, int (*fnptr)(const void *,const void *))
{
	EMP *p;
	if(size==sizeof(EMP))
	{
		p= (EMP *)e;

	}
	EMP temp;
	for(int i=0;i<nele-1;i++)
	{
		for(int j=i+1;j<nele;j++)
		{
			if((*fnptr)(&p[i],&p[j]) > 0)
			{
				temp=p[i];
				p[i]=p[j];
				p[j]=temp;
			}
		}
	}

}




