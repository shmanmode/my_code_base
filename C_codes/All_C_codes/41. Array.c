#include<stdio.h>
#define SIZE 7
int main(void)
{
	int arr[ SIZE ] ;

	int index;

	printf("\n Enter elements of array :: ");
	for(index=0; index<SIZE; index++)
	{
		printf("arr[%d]", index);
		//scanf("%d", &arr[index]);
		//scanf("%d", &index[arr]);
		//scanf("%d", (arr+index));
		scanf("%d", (index+arr));
	}

	printf("\n Elements of array :: \n");
	for(index=0; index<SIZE; index++)
	{
		//printf("\n %d [%u]", arr[index], &arr[index]);
		//printf("\n %d [%u]", index[arr], &index[arr]);
		//printf("\n %d [%u]", *(arr+index), (arr+index));
		printf("\n %d [%u]", *(index+arr), (index+arr));
	}
	printf("\n size of arr=%d", sizeof(arr));

	printf("\n &arr=%u &arr[0]=%u arr=%u",&arr , &arr[0], arr );
	printf("\n &arr+1=%u &arr[0]+1=%u arr+1=%u",&arr+1 , &arr[0]+1, arr+1 );

	printf("\n *arr=%d", *arr);
	printf("\n\n\n");

	//5++; lvalue req error
	//arr++; // lvalue req  // arr--;
	//++arr; // --arr;

	++arr[0];
	--arr[0];

	printf("\n Elements of array :: \n");
	for(index=0; index<SIZE; index++)
	{
		//printf("\n %d [%u]", arr[index], &arr[index]);
		//printf("\n %d [%u]", index[arr], &index[arr]);
		//printf("\n %d [%u]", *(arr+index), (arr+index));
		printf("\n %d [%u]", *(index+arr), (index+arr));
	}

	return 0;
}

