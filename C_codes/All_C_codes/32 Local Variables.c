#include<stdio.h>
int no1 = 100; // defination of global variable
//register int no5=10;
int main(void)
{  // main
	int no2=50;
	//static int no6=no2; // error as local variable not allowed to uses here
	static int no6=5; // allowed as constant

	printf("\n  no6=%d  &no6=%u", no6, &no6);
	register int no3=10;

	no6=no2;
	printf("\n no3::%d ", no3);
	//scanf("%d", &no3); //error
	//printf("\n no3=%d %u", no3, &no3);

	{// block no1
		// decleration and defination of local variable
		int no1 = 10; // local variable no1 to block no1

		printf("\n InSide Block1 no1=%d  &no1=%u", no1, &no1);

		{ //block no2

			int no1 = 5;  // local variable no1 to block no2

			printf("\n InSide Block2 no1=%d  &no1=%u", no1, &no1);

		}//end of block no2
	}//end of block no1
	printf("\n InSide Main Global Variables no1=%d  &no1=%u", no1, &no1);
	printf("\n InSide Main no2(50) no2=%d  &no2=%u", no2, &no2);
	return 0;
}//end of block main

extern int no1;//decleration of global varibale
