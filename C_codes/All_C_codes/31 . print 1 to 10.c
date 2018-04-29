#include<stdio.h>
//int no=1;
void fun();
int main(void)
{
	fun();

	return 0;
}
void fun()
{
	static int no=1;
	if(no>10)
		return;
	else
	{
		printf("\n%d %u %p", no, &no, &no );
		no++;
		fun();
	}
}

===========================================


#include<stdio.h>
int no=1;
int main(void)
{
//	static int no=1;
	if(no>10)
		return 0;
	else
	{
		printf("\n%d %u %p", no, &no, &no );
		no++;
		main();
	}
	return 0;
}

