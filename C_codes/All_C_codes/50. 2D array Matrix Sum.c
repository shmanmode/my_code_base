#include<stdio.h>
#define ROW 3
#define COL 3

int main(void)
{
	int mat[ROW][COL], r,c, sum, colsum[COL]={0}, gtolal=0;

	printf("\n Enter elements of matrix :: ");
	for(r=0; r<ROW; r++)
	{
		for(c=0; c<COL; c++)
		{
			printf("\n mat[%d][%d]", r,c);
			scanf("%d", &mat[r][c]);
		}
	}

	printf("\n Elements of Matrix :: \n");
	for(r=0; r<ROW; r++)
	{
		for(c=sum=0; c<COL; c++)
		{
			printf("%d[%u]\t",mat[r][c], &mat[r][c]);
			sum+= mat[r][c]; // row wise sum
			colsum[r]+= mat[c][r]; // col wise sum
		}
		printf("%d\n", sum);//go to next line
		gtolal+=sum; // grant total
	}
	for(c=0; c<COL; c++)
		printf("%d\t\t", colsum[c]);
	printf("%d", gtolal);
	return 0;
}


