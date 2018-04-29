#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int *ptr=NULL;

	ptr= (int*)malloc(sizeof(int)*1);
	if(ptr==NULL)
		printf("\n unable to allocate memory");
	else
	{
		printf("\n ptr=%u &ptr=%u", ptr, &ptr);


		//	*ptr=55;
		printf("\n Enter Value (*ptr ) ::");
		scanf("%d", ptr);

		printf("\n *ptr=%d", *ptr);

		free(ptr);
		ptr=NULL; // ptr=0;
		printf("\n memory is freed");
		//printf("\n *ptr=%d", *ptr);

	}
	return 0;
}
