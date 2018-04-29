#include<stdio.h>
#include<stdlib.h>
int main()
{
	int row, col, r,c;
	int **ptr=NULL;

	printf("\n Enter How Many Rows You want :: ");
	scanf("%d", &row);
	printf("\n Enter How Many Cols You want :: ");
	scanf("%d", &col);

	ptr= (int**)malloc(sizeof(int*)*row);
	for(r=0; r<row; r++)
	{
		ptr[r]= (int*)malloc(sizeof(int)*col);
	}

	printf("\n Enter elements of matrix :: \n");
	for(r=0; r<row; r++)
	{
		for(c=0; c<col; c++)
		{
			printf("\n ptr[%d][%d]", r,c);
			//scanf("%d", &ptr[r][c]);
			scanf("%d", (*(ptr+r)+c));
		}
	}


	printf("\n Elements of matrix ::\n ");
	printf("\&ptr=%u  ptr=%u\n", &ptr, ptr);
	for(r=0; r<row; r++)
	{
		printf("\n &ptr[%d] %u  ptr[%d] %u \n  ", r, &ptr[r], r, ptr[r]);
		for(c=0; c<col; c++)
		{
			printf("\t %d [%u]", ptr[r][c], &ptr[r][c]);
		}
		printf("\n");
	}

	for(r=0; r<row; r++)
	{
		free(ptr[r]);
		ptr[r]=NULL;
	}
	free(ptr);
	ptr=NULL;
	printf("\n Memory is freed...");
	return 0;
}
