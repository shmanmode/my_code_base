#include<stdio.h>
int main(void)
{
	int i, j, k , rows;
	printf("\n how many rows u want :: ");
	scanf("%d", &rows);

	for(i=1; i<=rows; i++)
	{
		for(j=rows ; j>=i; j--)
		{
			printf("  #  ");
		}
		for(k=i; k>=1; k--)
		{
			printf("%5d", k);
		}
		for(k=1; k<=i; k++)
		{
			printf("%5d", k);
		}
		printf("\n");
	}

	for(i=rows; i>=1; i--)
	{
		for(j=rows ; j>=i; j--)
		{
			printf("  #  ");
		}
		for(k=i; k>=1; k--)
		{
			printf("%5d", k);
		}
		for(k=1; k<=i; k++)
		{
			printf("%5d", k);
		}
		printf("\n");
	}


	return 0;
}
