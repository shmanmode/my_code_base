#include<stdio.h>
int main(void)
{
	/* sum of n number
	int no, counter, sum;

	printf("\n Enter No :: ");
	scanf("%d", &no);

	counter=sum=0;
	while(counter<no)
	{
		counter++;// counter=counter+1;
		printf("%5d ", counter);
		if(counter<no)
			printf("+");
		sum+=counter ; // sum= sum+counter;
	}

	printf(" = %d", sum);
	*/

	// factorial
	/*int no, counter, fact;

	printf("\n Enter No :: ");
	scanf("%d", &no);

	counter=0;
	fact=1;
	while(counter<no)
	{
		counter++;
		printf("%4d", counter);
		if(counter<no)
			printf("*");
		fact*=counter; // fact = fact *counter;
	}
	printf("=%d", fact);*/

	// count no of digits
/*	int no, counter, fact;


	printf("\n Enter No :: ");
	scanf("%d", &no);

	counter=0;
	while (no!=0)
	{
		no/=10;//no= no/10;
		counter++;// counter= counter+1;
	}

	printf("\n no of digits =%d", counter);
	*/

	// sum of digits
/*	int no, rem , sum;

	printf("\n Enter No :: ");
	scanf("%d", &no);

	sum=rem=0;
	while(no!=0)
	{
		rem= no%10;
		printf("%4d", rem);
		no/=10; // no=no/10;
		if(no!=0)
			printf(" + ");
		sum+=rem; // sum=sum+rem;
	}
	printf(" = %d ", sum);
	*/
	// rev
	int no, rem , rev, ono;

	printf("\n Enter No :: ");
	scanf("%d", &no);

	rev=rem=0;
	ono=no;
	while(no!=0)
	{
		rem=no%10;
		no/=10;
		rev= rev*10+rem;
	}
	printf(" = %d", rev);
	if(ono==rev)
		printf("\n%d is palindrome", ono);
	else
		printf("\n%d is not palindrome", ono);



	return 0;
}
