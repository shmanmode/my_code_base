#include<stdio.h>
int main(void)
{
	int no, sum, rem, ono;

	for(no=1; no<=500; no++)
	{
		for(sum=rem=0 , ono=no; ono!=0; ono/=10)
		{
			rem= ono%10;
			sum+=rem*rem*rem;
		}
		if(sum==no)
			printf("\t %d", no);
	}
	return 0;
}

=========================================================
#include<stdio.h>
int main(void)
{
	int i, j, k , counter;
	for(i=1; i<=10; i++)
	{
		for(j=i+1; j<=10; j++)
		{
			for(k=j+1; k<=10; k++)
			{
				counter++;
				if(i*i +j*j ==k*k)
				{

					printf("\n%d * %d + %d * %d == %d * %d", i, i, j, j, k, k);
				}
			}
		}
	}
	printf("\ncounter=%d", counter);
	return 0;
}

