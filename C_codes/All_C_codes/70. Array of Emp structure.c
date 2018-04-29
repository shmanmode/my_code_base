#include<stdio.h>
#include<string.h>
#define SIZE 3
#pragma pack(1)
#define TRUE 1
#define FALSE 0
struct date
{
	int dd;
	int mm;
	int yy;
};
struct emp
{
	int empno;
	char empname[10];
	float sal;
	struct date doj;
};
/*struct emp
{
	int empno;
	char empname[10];
	float sal;
	struct date
	{
		int dd;
		int mm;
		int yy;
	}doj;
};*/


void AcceptEmpInfo(struct emp e1[], int size);
void DisplayEmpInfo(const struct emp e1[], int size);
void AcceptDate(struct date *d1);
void DisplayDate(const struct date *d1);
int IsValidDate(const struct date *d1);
void SortAscEmpByEmpNo(struct emp e1[], int size);
struct emp* SearchEmpByNo(struct emp e1[], int size, int key);
int main(void)
{
	struct emp e[SIZE], *ptr=NULL;
	int find;
	printf("\n Enter Emp deatils :: \n");
	AcceptEmpInfo(e, SIZE);

	printf("\n Emp Info before sort \n ");
	DisplayEmpInfo(e,SIZE);

	//SortAscEmpByEmpNo(e, SIZE);
	//printf("\n Emp Info in  after sort \n ");
	//DisplayEmpInfo(e,SIZE);


	printf("\n Enter Emp to search :: ");
	scanf("%d", &find);

	ptr= SearchEmpByNo(e, SIZE, find);
	if(ptr==NULL)
		printf("\n %d is not found in array", find);
	else
	{
		printf("\n %d is  found in %d position", find, ptr-e);
		DisplayEmpInfo(ptr, 1);
	}

	return 0;
}
struct emp* SearchEmpByNo(struct emp e1[], int size, int key)
{
	int i;
	for(i=0; i<SIZE; i++)
	{
		if(e1[i].empno==key)
			return &e1[i];
	}
	return NULL;
}
void AcceptEmpInfo(struct emp e1[], int size)
{
	int i;
	for(i=0;i<size; i++)
	{
		printf("\n enter Emp No ::  ");
		scanf("%d", &e1[i].empno);

		printf("\n enter Emp Name ::  ");
		scanf("%*c%s", e1[i].empname);

		printf("\n Enter Emp Sal ::  ");
		scanf("%f", &e1[i].sal);
		do
		{
			AcceptDate(&e1[i].doj);
		}while(!IsValidDate(&e1[i].doj));
	}

/*	printf("\n Enter Emp doj  in dd-mm-yyyy format ::");
	scanf("%d%*c%d%*c%d", &e1->doj.dd, &e1->doj.mm, &e1->doj.yy );*/
	return;
}
void SortAscEmpByEmpNo(struct emp e1[], int size)
{
	int i, j;
	struct emp temp;

	for(i=0; i<size; i++)
	{
		for(j=i+1; j<size; j++)
		{
			//if(e1[i].empno>e1[j].empno ) // sort asc by empno
			//if(strcmp(e1[i].empname, e1[j]. empname)>0)
			if(e1[i].doj.yy > e1[j].doj.yy )
			{
				temp= e1[i];
				e1[i]=e1[j];
				e1[j]=temp;
			}
			else if(e1[i].doj.yy == e1[j].doj.yy  && e1[i].doj.mm > e1[j].doj.mm )
			{
				temp= e1[i];
				e1[i]=e1[j];
				e1[j]=temp;
			}
			else if(e1[i].doj.yy == e1[j].doj.yy  && e1[i].doj.mm == e1[j].doj.mm && e1[i].doj.dd > e1[j].doj.dd )
			{
				temp= e1[i];
				e1[i]=e1[j];
				e1[j]=temp;
			}

		}
	}



}
void DisplayEmpInfo(const struct emp e1[], int size)
{
	//e1->sal=0;
	int i;
	printf("\n EmpNo Name Sal   Doj\n");
	for(i=0; i<size; i++)
	{
		printf("\n %-6d%-10s %-6.2f ", e1[i].empno, e1[i].empname, e1[i].sal);
		DisplayDate(&e1[i].doj);
	}
	//printf("\n %d %s %f  %d-%d-%d", e1->empno, e1->empname, e1->sal, e1->doj.mm, e1->doj.dd, e1->doj.yy);
	return;
}
void AcceptDate(struct date *d1)
{
	printf("\n Enter doj  in dd-mm-yyyy format ::");
	scanf("%d%*c%d%*c%d", &d1->dd, &d1->mm, &d1->yy );
}
void DisplayDate(const struct date *d1)
{
	printf(" \t %d-%d-%d",  d1->dd, d1->mm, d1->yy);
}
int IsValidDate(const struct date *d1)
{
	int DaysInMonth[]={31, 28, 31,30,31,30,31,31, 30, 31,30, 31};
	if(d1->yy%4==0)
		DaysInMonth[1]=29;  // leap

	if(!( d1->yy>=100 && d1->yy<=9999))
		return FALSE;

	if(!( d1->mm>=1 && d1->mm<=12))
		return FALSE;
	if(!( d1->dd>=1  && d1->dd <= DaysInMonth[d1->mm -1]))
		return FALSE;
	return TRUE;
}
