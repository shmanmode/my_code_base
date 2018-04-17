#include <stdio.h>
int main(void)
{
	int counter, no;

	printf("\n Enter No :: ");
	scanf("%d", &no);

	/*
	counter=0;
	while(counter<no)
	{
		counter++; // counter=counter+1;
		printf("%5d", counter);
		if(counter%12==0)
			printf("\n");
	}*/

	/*counter= no;
	while(counter>=1)//while(counter>0)
	{
		printf("%5d", counter);
		counter--; //counter=counter-1;
	}*/


	/*counter=0;
	while(-1)
	{
		counter++; // counter=counter+1;
		printf("%5d", counter);
		if(counter%12==0)
			printf("\n");
		if(counter>=no)
			break;  // breck go out of loop
	}*/
	counter=0;
	while(counter<no) // infinte loop if no is +ve
	{
		counter++; // counter=counter+1;
		printf("%10d", counter);
		if(counter%12==0)
			printf("\n");
	}
	printf("\n end");
	return 0;

}


