#include<stdio.h>
typedef union test
{
	short int no;
	char name[2];
}TEST;
int main(void)
{
	TEST e = {0};//union test e = { 0 };
	//e.name[0] =   'A'; //'a';
	//e.name[1] =   'B'; //'b';
	e.no=16961;
	printf("\n Size of test::%d\n", sizeof(e));
	printf("\n no=%d \t%c\t %c\n",e.no,  e.name[0], e.name[1]);

	return 0;

}





/*

A	65	01000001
B	66	01000010

16961	0100001001000001
BA	    0100001001000001

_______________________________________


a	97     01100001
b	98     01100010

25185  0110001001100001
ba     0110001001100001
*/

