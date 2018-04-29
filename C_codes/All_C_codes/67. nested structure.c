#include<stdio.h>
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


void AcceptEmpInfo(struct emp *e1);
void DisplayEmpInfo(const struct emp *e1);
void AcceptDate(struct date *d1);
void DisplayDate(const struct date *d1);
int IsValidDate(const struct date *d1);

int main(void)
{
	struct emp e;

	printf("\n Enter Emp deatils :: \n");
	AcceptEmpInfo(&e);

	printf("\n Emp Info in main \n ");
	DisplayEmpInfo(&e);

	return 0;
}
void AcceptEmpInfo(struct emp *e1)
{
	printf("\n enter Emp No ::  ");
	scanf("%d", &e1->empno);

	printf("\n enter Emp Name ::  ");
	scanf("%*c%s", &e1->empname);

	printf("\n Enter Emp Sal ::  ");
	scanf("%f", &e1->sal);


	do
	{
		AcceptDate(&e1->doj);
	}while(!IsValidDate(&e1->doj));

/*	printf("\n Enter Emp doj  in dd-mm-yyyy format ::");
	scanf("%d%*c%d%*c%d", &e1->doj.dd, &e1->doj.mm, &e1->doj.yy );*/


	return;
}
void DisplayEmpInfo(const struct emp *e1)
{
	//e1->sal=0;
	printf("\n EmpNo Name Sal using struct variable\n");
	printf("\n %d %s %f ", e1->empno, e1->empname, e1->sal);
	DisplayDate(&e1->doj);
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
