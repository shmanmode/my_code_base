#include<stdio.h>
#pragma pack(1)
struct date
{
	int dd, mm, yy;
};
struct date1
{
	short int dd, mm, yy;
};

struct date2
{
	unsigned dd:5;
	unsigned mm:4;
	unsigned yy:11;
};
struct date3
{
	signed dd:6;
	signed mm:5;
	signed yy:12;
};
struct emp
{
	int empno;
	char name[10];
	float sal;
	//signed comp:8;
	unsigned comp:7;
	unsigned mobile:1;
	unsigned labtop:1;

};
int main()
{
	int no;
	struct emp e={1, "abc", 12000, 1,1,1};
	struct emp *ptr=&e;

	printf("\n ptr->empno %d", ptr->empno);
	printf("\n e.empno %d", e.empno);
	printf("\n ptr->empno %d", (*ptr).empno);

	printf("\n size of struct date =%d", sizeof(struct date));
	printf("\n size of struct date1 =%d", sizeof(struct date1));
	printf("\n size of struct date2 =%d", sizeof(struct date2));
	printf("\n size of struct date3 =%d", sizeof(struct date3));
	printf("\n size of struct emp =%d", sizeof(struct emp));

	printf("\n %d %s %f %d %d %d", e.empno, e.name, e.sal, e.comp, e.mobile, e.labtop);

	e.comp==1 ? printf("\n have comp ") : printf("\n dont have comp");

	printf("\n 1. haveing comp 0. not having comp :: ");
	printf("\n Enter your value :: ");
	//scanf("%d", &e.comp);
	scanf("%d", &no);
	e.comp=no;
	e.comp==1 ? printf("\n have comp ") : printf("\n dont have comp");
	printf("\n comp=%d", e.comp);


	return 0;

}

