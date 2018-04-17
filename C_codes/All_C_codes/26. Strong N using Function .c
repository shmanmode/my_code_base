#include<stdio.h>
int factorial(int n);
int IsStrongNumber(int n);
void StrongNumberInRange(int llimit,int ulimit);
int main(void)
{
	// to  check factorial fun
	/*
	int no, ans;

	printf("\n Enter No :: ");
	scanf("%d", &no);

	ans= factorial(no);
	printf("\n %d!= %d", no, ans);
	*/

	//2. test IsStrongNumber function

	/*int no, ans;

	printf("\n Enter No :: ");
	scanf("%d", &no);

	//ans= IsStrongNumber(no);
	// if(ans==no) // or

	if(no==IsStrongNumber(no))
		printf("\n %d is strong no", no);
	else
		printf("\n %d is not strong no", no);
	*/

	//3 . test for StrongNumberInRange

	int lowerlimit, upperlimit;

	printf("\n Enter Lower Limit :: ");
	scanf("%d", &lowerlimit);

	printf("\n Enter Upper Limit :: ");
	scanf("%d", &upperlimit);

	printf("\n Strong No between %d to %d ::\n  ", lowerlimit, upperlimit);
	StrongNumberInRange(lowerlimit, upperlimit);

	return 0;
}
int factorial(int n)
{
	int f, i;
	for(i=f=1;  i<=n; i++)
	{
		f*=i; // f= f*i;
	}
	return f;
}
int IsStrongNumber(int n)
{
	int rem, sum;

	for(sum=rem=0; n!=0; n/=10)
	{
		rem= n%10;
		sum += factorial(rem);
	}
	return sum;
}
void StrongNumberInRange(int llimit,int ulimit)
{
   int no;
	for(no=llimit; no<=ulimit; no++)
	{
		if(no==IsStrongNumber(no))
			printf("%5d", no);
	}
	return;
}
