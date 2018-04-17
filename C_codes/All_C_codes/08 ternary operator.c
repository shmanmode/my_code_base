#include <stdio.h>
#include<stdlib.h>
int main(void)
{
	// condition ? true part : false part;

	int no1=0;

	no1%2==0 ? printf("\n %d is even ", no1) :printf("\n %d is odd ", no1);
	!(no1%2) ? printf("\n %d is even ", no1) :printf("\n %d is odd ", no1);
	no1%2 ? printf("\n %d is odd ", no1) :printf("\n %d is even ", no1);

	if(no1%2==0)
		printf("\n %d is even ", no1);
	else
		printf("\n %d is odd ", no1);

	// condition ?  true part : condition ? true : false ;

	no1>0 ? printf("\n %d is +ve ", no1): no1==0 ? printf("\n%d is zero", no1) : printf("\n %d is -ve", no1);

	int no1=100, no2=100;
	no1> no2? printf("\n %d is max (no1)", no1): no2> no1 ? printf("%d is max (no2)", no2) : printf("\n %d are equal  %d", no1, no2);


	return 0;
}
