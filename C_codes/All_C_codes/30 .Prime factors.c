#include<stdio.h>
int counter=2;
void PrimeFactors(int n);
void PrimeFactorsRec(int n);

int main(void)
{
	int no;
	printf("\n Enter No :: ");
	scanf("%d", &no);
	//PrimeFactors(no);
	PrimeFactorsRec(no);

	return 0;
}
void PrimeFactors(int n)
{
	int counter=2;
	while(n!=1)
	{
		if(n%counter==0)
		{
			printf("%d *", counter);
			n/=counter; // n= n/counter;
		}
		else
			counter++;
	}
	return;
}
void PrimeFactorsRec(int n)
{
	//static int counter=2;
	//getchar();
//	printf("\n n=%d [%u] counter=%d [%u]", n, &n, counter, &counter);
	if(n==1)
		return ;
	else if(n%counter==0)
	{
		printf("%d *", counter);
		n/=counter; // n= n/counter;
	}
	else
		counter++;
	//printf("\n n=%d [%u] counter=%d [%u]", n, &n, counter, &counter);
	PrimeFactorsRec(n);

	return;
}
