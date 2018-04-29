#include<stdio.h>
#pragma pack(1) //- structure member alligment 1 byte
struct emp
{
	int empno;
	char empname[10];
	float sal;
};
int main(void)
{
	struct emp e;
	struct emp *ptr=&e;


	printf("\n sizeof (e)=%d", sizeof(e));
	printf("\n sizeof (struct emp)=%d", sizeof(struct emp));

	printf("\n sizeof (e)=%d", sizeof(ptr));

	printf("\n Enter emp deatils :: ");
	printf("\n enter Emp No ::  ");
	scanf("%d", &e.empno);

	printf("\n enter Emp Name ::  ");
	scanf("%*c%s", &e.empname);

	printf("\n Enter Emp Sal ::  ");
	scanf("%f", &e.sal);

	printf("\n EmpNo Name Sal using struct variable\n");
	printf("\n %d %s %f", e.empno, e.empname, e.sal);

	printf("\n EmpNo Name Sal  using pointer\n");
	printf("\n %d %s %f", ptr->empno, ptr->empname, ptr->sal);

	printf("\n ptr=%u  ptr+1=%u", ptr, ptr+1);
	printf("\n &e=%u  &e+1=%u", &e, &e+1);


	return 0;
}
