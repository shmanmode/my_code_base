#include <stdio.h>
int main(void)
{
	int counter, no;

	printf("\n Enter No :: ");
	scanf("%d", &no);
	/*
	for(counter=1; counter<=no;  ++counter)
	{
		printf("%5d", counter );
	}*/
	/*
	for(counter=no; counter>=1;  --counter)
	{
		printf("%5d", counter );
	}*/
	/*
	counter=1;
	for(;;)
	{
		printf("%5d", counter );
		++counter;
		if(counter>no)
			break;
	}*/
/*
	for(counter=1; counter<=no;  ++counter); // it will give last value of counter
	{
		printf("%5d", counter );
	}
*/
	//printf("\n Enter No :: ");
	for(scanf("%d", &no), counter=1; counter<=no; printf("%5d",counter++));

	return 0;

}


