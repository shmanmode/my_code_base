#include<stdio.h>
#pragma pack(1)
struct emp
{
	int empno;
	char empname[10];
	float sal;
};
struct emp AcceptEmpInfo();
void DisplayEmpInfo(const struct emp *e1);
int main(void)
{
	struct emp e;

	printf("\n Enter Emp deatils :: \n");
	e=AcceptEmpInfo();

	printf("\n Emp Info in main \n ");
	DisplayEmpInfo(&e);

	return 0;
}
struct emp AcceptEmpInfo()
{
	struct emp e1;

	printf("\n enter Emp No ::  ");
	scanf("%d", &e1.empno);

	printf("\n enter Emp Name ::  ");
	scanf("%*c%s", &e1.empname);

	printf("\n Enter Emp Sal ::  ");
	scanf("%f", &e1.sal);

	return e1;
}
void DisplayEmpInfo(const struct emp *e1)
{
	//e1->sal=0;
	printf("\n EmpNo Name Sal using struct variable\n");
	printf("\n %d %s %f", e1->empno, e1->empname, e1->sal);
	return;
}
