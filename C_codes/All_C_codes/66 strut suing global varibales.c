#include<stdio.h>
#pragma pack(1) //- structure member alligment 1 byte
struct emp
{
	int empno;
	char empname[10];
	float sal;
};
struct emp e;
void AcceptEmpInfo(void );
void DisplayEmpInfo(void);
int main(void)
{
	printf("\n Enter Emp deatils :: \n");
	AcceptEmpInfo();

	printf("\n Emp Info in main \n ");
	DisplayEmpInfo();

	return 0;
}
void AcceptEmpInfo(void)
{
	printf("\n enter Emp No ::  ");
	scanf("%d", &e.empno);

	printf("\n enter Emp Name ::  ");
	scanf("%*c%s", &e.empname);

	printf("\n Enter Emp Sal ::  ");
	scanf("%f", &e.sal);

	return;
}
void DisplayEmpInfo(void)
{
	printf("\n EmpNo Name Sal \n");
	printf("\n %d %s %f", e.empno, e.empname, e.sal);
	return;
}
