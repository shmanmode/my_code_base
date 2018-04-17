#include<stdio.h>
void table(int n);
int table_no(int n, int c);
int main(void)
{
	int no, i;

	printf("\n Enter No :: ");
	scanf("%d", &no);

	printf("\n print table in main \n");
	for(i=1; i<=10; i++)
		printf("\n %d * %d = %d", no, i, table_no(no, i));

	//table(no);

	return 0;
}
int table_no(int n, int c)
{
	return n*c;
}
void table(int n)
{
	int i;
	printf("\n print table inside function \n");
	for(i=1; i<=10; i++)
	{
		printf("\n %d * %d =%d", n, i, n*i);
	}
	return ;
}
