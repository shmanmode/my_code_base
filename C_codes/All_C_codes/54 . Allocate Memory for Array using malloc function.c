#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int *ptr=NULL;
	int no, i;

	printf("\n Enter No :: ");
	scanf("%d", &no);

	ptr= (int*)malloc(sizeof(int)*no);
	if(ptr==NULL)
		printf("\n unable to allocate memory");
	else
	{
		printf("\n ptr=%u &ptr=%u", ptr, &ptr);

		printf("\n Enter Elements of array :: ");
		for(i=0; i<no; i++)
		{
				printf("\n ptr[%d] :: ", i);
			//	scanf("%d",(ptr+i) );
			//	scanf("%d",(i+ptr) );
			  //scanf("%d",&ptr[i] );
				scanf("%d",&i[ptr] );
		}

		printf("\n Elements of Array ::  ");
		for(i=0; i<no; i++)
		{
			//printf("\n %d [%u]", *(ptr+i), (ptr+i));
			// printf("\n %d [%u]", *(i+ptr), (i+ptr));
			//printf("\n %d [%u]", ptr[i], &ptr[i]);
			printf("\n %d [%u]", i[ptr], &i[ptr]);
		}

		free(ptr);
		ptr=NULL; // ptr=0;
		printf("\n memory is freed");
	}
	return 0;
}
