#include<stdio.h>
#pragma pack(1) //- structure member alligment 1 byte
struct emp
{
	int empno;
	char empname[10];
	float sal;
};
void AcceptEmpInfo(struct emp e1);
void DisplayEmpInfo(struct emp e1);
int main(void)
{
	struct emp e;

	printf("\n Enter Emp deatils :: \n");
	AcceptEmpInfo(e);

	printf("\n Emp Info in main \n ");
	DisplayEmpInfo(e);

	return 0;
}
void AcceptEmpInfo(struct emp e1)
{
	printf("\n enter Emp No ::  ");
	scanf("%d", &e1.empno);

	printf("\n enter Emp Name ::  ");
	scanf("%*c%s", &e1.empname);

	printf("\n Enter Emp Sal ::  ");
	scanf("%f", &e1.sal);

	printf("\n Emp Info in AcceptFunction \n ");
	DisplayEmpInfo(e1);

	return;
}
void DisplayEmpInfo(struct emp e1)
{
	printf("\n EmpNo Name Sal using struct variable\n");
	printf("\n %d %s %f", e1.empno, e1.empname, e1.sal);
	return;
}
