#include<stdio.h>
int main(void)
{
	int sum(int no);
	int n=5,ans=0;
	ans= sum(n);
	printf("\n =%d ", ans);
	return 0;
}
int sum(int no)
{
	int add=0;
	getchar();
	printf("\n no=%d", no);

	if(no==1)
	{
		printf("\n no=%d [%u] add=1", no, &no);
		return 1;
	}
	else
	{
		add= no + sum(no--);
		printf("\n no=%d [%u] add=%d [%u]", no, &no, add, &add);
		return add;
	}
}
