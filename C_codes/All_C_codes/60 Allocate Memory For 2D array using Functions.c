#include<stdio.h>
#include<stdlib.h>
//void ReadMatrix(int mat[ROW][COL], int row, int col);
void ReadMatrix(int **mat, int row, int col);
void PrintMatrix(int **mat, int row, int col);
int** CreateMatrix(int row, int col);
void FreeMatrix(int **mat, int row);
int main()
{
	int row, col, r,c;
	int **ptr=NULL;

	printf("\n Enter How Many Rows You want :: ");
	scanf("%d", &row);
	printf("\n Enter How Many Cols You want :: ");
	scanf("%d", &col);

	ptr=CreateMatrix(row, col);

	printf("\n Enter elements of matrix :: \n");
	ReadMatrix(ptr, row, col);

	printf("\n Elements of matrix ::\n ");
	PrintMatrix(ptr, row, col);

	FreeMatrix(ptr, row);
	return 0;
}
int** CreateMatrix(int row, int col)
{
	int r;
	int **mat= (int**)malloc(sizeof(int*)*row);
	for(r=0; r<row; r++)
	{
		mat[r]= (int*)malloc(sizeof(int)*col);
	}
	return mat;    // return &mat --- int***
}
void ReadMatrix(int **mat, int row,int col)
{
	int r,c;

	for(r=0; r<row; r++)
	{
		for(c=0; c<col; c++)
		{
			printf("\n mat[%d][%d]", r,c);
			//scanf("%d", &mat[r][c]);
			scanf("%d", (*(mat+r)+c));
		}
	}
	return;
}
void PrintMatrix(int **mat, int row, int col)
{
	int r,c;
	printf("\&mat=%u  mat=%u\n", &mat, mat);
	for(r=0; r<row; r++)
	{
		printf("\n &mat[%d] %u mat[%d] %u \n  ", r, &mat[r], r, mat[r]);
		for(c=0; c<col; c++)
		{
			//printf("\t %d [%u]", mat[r][c], &mat[r][c]);
			printf("\t %d [%u]", *(*(mat+r)+c),(*(mat+r)+c));
		}
		printf("\n");
	}
	return;
}
void FreeMatrix(int **mat, int row)
{
	int r;
	for(r=0; r<row; r++)
	{
		free(mat[r]);
		mat[r]=NULL;
	}
	free(mat);
	mat=NULL;
	printf("\n Memory is freed...");
	return;
}
