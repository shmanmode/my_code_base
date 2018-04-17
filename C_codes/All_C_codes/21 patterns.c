#include<stdio.h>
int main(void)
{
	int row, col, cnt=1;
/*
	for(row=1; row<=10; row++)
	{
		for(col=1; col<=10; col++)
		{
			//printf("\nrow=%d col=%d", row, col);
			//printf("%5d", row*col); // print table
			printf("%5d", row+(col-1)*10);
		}
		printf("\n");// go to next row
		//getchar();
	}
	*/

	for(row=1; row<=5; row++)
	{
		for(col=1; col<=row; col++)
		{
			//printf("%5d", row);
			//printf("%5d", col);
			//printf("%5c", 64+col);
			//printf("%5c", 64+row);
			 //printf("  %c  ", '*');
			 //printf("  *  ");
			printf("%5d", cnt++);
		}
		printf("\n");// go to next row
	}

	return 0;
}
