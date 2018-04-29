#include<stdio.h>
#define ROW 3
#define COL 3
//void ReadMatrix(int m[ROW][COL], int row,int col);
void ReadMatrix(int m[][COL], int row,int col);
void PrintMatrix(int m[][COL], int row,int col);
void MatrixSum(int m1[][COL], int m2[][COL],int result[][COL], int row, int col);
void MatrixMultiplication(int m1[][COL], int m2[][COL], int ans[][COL], int row, int col);
int main(void)
{
	int mat1[ROW][COL], mat2[ROW][COL], ans[ROW][COL]={0};

	printf("\n Enter elements of matrix1 :: ");
	ReadMatrix(mat1, ROW ,COL);

	printf("\n Elements of Matrix1 :: \n");
	PrintMatrix(mat1, ROW,COL);


	printf("\n Enter elements of matrix2 :: ");
	ReadMatrix(mat2, ROW ,COL);

	printf("\n Elements of Matrix2 :: \n");
	PrintMatrix(mat2, ROW,COL);

	MatrixMultiplication(mat1,mat2, ans, ROW, COL);
	printf("\n Multiplication of Matrix  Are::\n");
	PrintMatrix(res, ROW, COL);

	MatrixSum(mat1, mat2, ans, ROW, COL);
	printf("\n Elements of  ans Matrix:: \n");
	PrintMatrix(ans, ROW,COL);




	return 0;
}
void MatrixMultiplication(int m1[][COL], int m2[][COL], int ans[][COL], int row, int col)
{
	int i, j, k;
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{

			for(k=0; k<row; k++)
			{
				printf("%d * %d \n", m1[i][k], m2[k][j]);
				printf("i=%d j=%d k=%d \n", i,j,k);
				ans[i][j] += m1[i][k] * m2[k][j];
			}
		}
	}
	return;
}
void MatrixSum(int m1[][COL], int m2[][COL], int result[][COL], int row, int col)
{
	int r,c;
	for(r=0; r<row; r++)
	{
		for(c=0; c<col; c++)
		{
			result[r][c]= m1[r][c]+m2[r][c];
		}
	}
	return;
}
void ReadMatrix(int m[][COL], int row,int col)
{
	int r,c;
	for(r=0; r<row; r++)
	{
		for(c=0; c<col; c++)
		{
			printf("\n m[%d][%d]", r,c);
			//scanf("%d", &m[r][c]);
			scanf("%d", (*(m+r)+c));
		}
	}
	return;
}
void PrintMatrix(int m[][COL], int row,int col)
{
	int r, c;
	for(r=0; r<row; r++)
	{
		for(c=0; c<col; c++)
		{
			//printf("%d[%u]\t",m[r][c], &m[r][c]);
			printf("%d[%u]\t", *(*(m+r)+c), (*(m+r)+c));
		}
		printf("\n");//go to next line
	}
	return;
}

