#include<stdio.h>
#include<stdlib.h>
void ReadArray(int *a, int size);
void PrintArray(int *a, int size);
int* CreateArray( int size);
void FreeArray(int *a);

int main(void)
{
	int *ptr=NULL;
	int no;

	printf("\n Enter No :: ");
	scanf("%d", &no);

	ptr= CreateArray(no);
	if(ptr==NULL)
		printf("\n unable to allocate memory");
	else
	{
		printf("\n ptr=%u &ptr=%u", ptr, &ptr);

		printf("\n Enter Elements of array :: ");
		ReadArray(ptr, no);
		printf("\n Elements of Array ::  ");
		PrintArray(ptr, no);

		FreeArray(ptr);


	}
	return 0;
}
void ReadArray(int *a, int size)
{
	int i;
	for(i=0; i<size; i++)
	{
			printf("\n a[%d] :: ", i);
		//	scanf("%d",(a+i) );
		//	scanf("%d",(i+a) );
		  //scanf("%d",&a[i] );
			scanf("%d",&i[a] );
	}
	return;
}
void PrintArray(int *a, int size)
{
	int i;
	for(i=0; i<size; i++)
	{
		//printf("\n %d [%u]", *(a+i), (a+i));
		// printf("\n %d [%u]", *(i+a), (i+a));
		//printf("\n %d [%u]", a[i], &a[i]);
		printf("\n %5d [%u]", i[a], &i[a]);
	}
	return;

}
int* CreateArray(int size)
{
	int *arr=NULL;
	arr= (int*)malloc(sizeof(int)*size);
	return arr;
}
void FreeArray(int *a)
{
	free(a);
	a=NULL; // ptr=0;
	printf("\n memory is freed");
	return ;
}
