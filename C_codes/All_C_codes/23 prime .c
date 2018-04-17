#include<stdio.h>
int main(void)
{
	/*
  int counter, no, nooffactors=0;
	printf("\n Enter No :: ");
	scanf("%d", &no);
	counter=1;
	while(counter<=no)
	{
		if(no%counter==0)
		{
			printf("%5d", counter);
			nooffactors++;
		}
		counter++;
	}
	if(nooffactors==2)
		printf("\n%d is prime", no);
	else
		printf("\n%d is not prime", no);
*/
	/* prime
	int counter, no, nooffactors=0;
	printf("\n Enter No :: ");
	scanf("%d", &no);

	counter=2;
	while(counter<no)
	{
		if (no%counter==0)
		{
			printf("%5d", counter);
			break;
		}
		counter++;
	}
	if(counter==no)
		printf("\n %d is prime", no);
	else
		printf("\n%d is not prime", no);
	*/

	int counter, no , lowerlim, upperlim;
	printf("\n Enter lowerlim  :: ");
	scanf("%d", &lowerlim);

	printf("\n Enter upperlim  :: ");
	scanf("%d", &upperlim);

	printf("\n prime no between %d to %d \n", lowerlim, upperlim);
	for( no=lowerlim; no<=upperlim; no++)
	{
		for(counter=2; counter<no; counter++)
		{
			if(no%counter==0)
				break;
		}
		if(no==counter)
			printf("%4d", no);
	}

	return 0;
}
