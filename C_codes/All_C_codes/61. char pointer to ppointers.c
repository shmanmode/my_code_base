#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define LEN 30
int main(void)
{

	char **arr=NULL;
	char name[LEN], *temp=NULL;
	int i, j, no;

	printf("\n Enter How Many students you want :: ");
	scanf("%d", &no);

	arr= (char**)malloc(sizeof(char*)*no);


	printf("\n Enter Names : \n");

	for(i=0; i<no; i++)
	{
		printf("\n Enter names[%d]", i);
		scanf("%s", name);
		// allocating memory
		arr[i]= (char*) malloc(sizeof(char) * (strlen(name)+1) );
		//copy name into array
		strcpy(arr[i], name);
	}

	printf("\n Names are :: \n");
	for(i=0; i<no; i++)
	{
		printf("\n &arr[%d] %u arr[%d] %u arr[%d] %-10s *arr[%d] %c", i, &arr[i], i, arr[i], i, arr[i], i, *arr[i]);
	}

	// asc sorting
	for(i=0; i<no; i++)
	{
		for(j=i+1; j<no; j++)
		{
			//if(strcmp(arr[i], arr[j])>0) // asc sort
			if(strcmp(arr[i], arr[j])<0) // desc sort
			{
				temp=arr[i];
				arr[i]= arr[j];
				arr[j]=temp;
			}
		}
	}

	printf("\n Names after desc Sort :: \n");
	for(i=0; i<no; i++)
	{
		printf("\n &arr[%d] %u arr[%d] %u arr[%d] %-10s *arr[%d] %c", i, &arr[i], i, arr[i], i, arr[i], i, *arr[i]);
	}



	for(i=0; i<no; i++)
	{
		free(arr[i]);
		arr[i]=NULL;
	}
	free(arr);
	arr=NULL;
	printf("\n memory is freed....");

	return 0;
}
