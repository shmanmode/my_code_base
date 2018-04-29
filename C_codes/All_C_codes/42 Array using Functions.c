#include<stdio.h>
#define SIZE 5
#define SWAP(n1, n2, datatype) { datatype temp; temp=n1; n1=n2; n2=temp;}
void ReadArray(int a[], int size);
//void ReadArray(int a[SIZE], int size);
void PrintArray(int *a, int size);
int SumArray(int *a, int size);
int MaxArray(int a[], int size);
void MaxMinArray(int *a, int size, int *pMax , int *pMin);
void PrintRev(int *a, int size);
void RevArray(int *a, int size);
void swap(int *n1, int *n2);
int SeqSearch(int a[], int size, int key);
int* LinearSearch(int *a, int size, int key);
void SelectionSortAsc(int *a, int size);
void BubleSortAsc(int *a, int size);
int MenuChoice();
int main(void)
{
	int arr[ SIZE ], choice, ans=0, ans1=0, find, *ptr=NULL;

	do
	{
		choice= MenuChoice();
		switch(choice)
		{
			case 1: // read array
					printf("\n Enter elements of array :: ");
					ReadArray(arr, SIZE);
					break;
			case 2: // print array
					printf("\n Elements of array :: \n");
					PrintArray(arr,SIZE);
					break;
			case 3: // array sum
					ans= SumArray(arr, SIZE);
					printf("\n sum=%d", ans);
					break;
			case 4: // max array
					ans= MaxArray(arr, SIZE);
					printf("\n max=%d", ans);
					break;
			case  5 : // max min
					MaxMinArray(arr, SIZE,&ans, &ans1);
					printf("\n max=%d", ans);
					printf("\n min=%d", ans1);
					break;
			case 6: // print rev
					printf("\n Elements of array :: \n");
					PrintArray(arr,SIZE);
					printf("\n Print Rev:: \n");
					PrintRev(arr,SIZE);
					break;
			case 7: // array rev
					printf("\n Elements of array :: \n");
					PrintArray(arr,SIZE);
					printf("\n Print Rev:: \n");
					RevArray(arr,SIZE);
					PrintArray(arr,SIZE);
					break;
			case 8: // seq search

					printf("\n Enter Element to search :: ");
					scanf("%d", &find);
					ans = SeqSearch(arr, SIZE, find);
					if(ans==-1)
						printf("\n %d is not found in array ", find);
					else
						printf("\n %d is found in array at %d position ", find, ans);
					break;

			case 9: // linear search
					printf("\n Enter Element to search :: ");
					scanf("%d", &find);

					ptr=LinearSearch(arr, SIZE, find);
					if(ptr==NULL)
						printf("\n %d is not found in array", find);
					else
						printf("\n %d is found  %d position in array", find, ptr-arr);
					break;
			case 10: // sorting
					printf("\n array before sort \n ");
					PrintArray(arr, SIZE);
					//SelectionSortAsc(arr, SIZE);
					BubleSortAsc(arr, SIZE);
					printf("\n array after sort \n ");
					PrintArray(arr, SIZE);
					break;
		}
	}while(choice!=0);
	printf("\n size of arr=%d", sizeof(arr)); //20 bytes

	return 0;
}
void BubleSortAsc(int *a, int size)
{
	int i, j, temp;
	for(i=0; i<size; i++)
	{
		for(j=0; j<size-i-1; j++)
		{
			printf("\n a[%d]%d a[%d] %d", j, a[j], j+1, a[j+1]);
			if(a[j]>a[j+1])
			{
				swap(&a[j], &a[j+1]);
			}
		}
		printf("\n +====================\n");

	}
}
void SelectionSortAsc(int *a, int size)
{
	int temp, i, j;

	for(i=0; i<size; i++)
	{
		for(j=i+1; j<size; j++)
		{
			printf("\n a[%d]%d a[%d]%d", i, a[i], j, a[j] );
			//if(a[i]<a[j]) desc
			if(a[i]>a[j]) // asc
			{
				/*temp= *(a+i);//temp=a[i];
				*(a+i)= *(a+j);//a[i]=a[j];
				*(a+j)=temp;//a[j]=temp;*/

				//swap(&a[i], &a[j]); // fun

				SWAP(a[i], a[j], int); // by macro

			}
		}
	}
	return;
}
int* LinearSearch(int *a, int size, int key)
{
	int index;
	for(index=0; index<size; index++)
	{
		if(key==*(a+index))  // if( key==a[index])
			return (a+index); // return &a[index];
	}
	return NULL;
}
int SeqSearch(int a[], int size, int key)
{
	int index;
	for(index=0; index<size; index++)
	{
		if(a[index]==key)
			return index;
	}
	return -1;
}
void swap(int *n1, int *n2)
{
	int temp;
	temp= *n1;
	*n1=*n2;
	*n2=temp;
}
void RevArray(int *a, int size)
{
	int i, j, temp;
	//for(i=0, j=size-1; i<size/2; i++, j--)
	//for(i=0, j=size-1; i<j; i++, j--)
	for(i=0, j=size-1; j>i; i++, j--)
	{
		// 1. swap
		/*
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;*/

		//swap(&a[i], &a[j]); // swap sing function

		SWAP(a[i], a[j], int); // 3. using macro swap
		{
			//int temp; temp=a[i]; a[i]=a[j]; a[j]=temp;
		}
	}
	return;
}
void PrintRev(int *a, int size)
{
	int index;
	for(index=size-1; index>=0 ; index--)
	{
		printf("\n %d [%u]", *(a+index), (a+index));
	}
	return;
}
void MaxMinArray(int *a, int size, int *pMax , int *pMin)
{
	int index;
	for(index=1, *pMax=*pMin=a[0];index<size; index++)
	{
		if(*pMax<*(a+index))  // if(*pMax<a[index])
		{
			*pMax= *(a+index);
		}
		if(*pMin>*(a+index))  // if(*pMax<a[index])
		{
			*pMin= *(a+index);
		}

	}
	return;

}
int MaxArray(int a[], int size)
{
	int index, max;
	for(max=a[0], index=1; index<size; index++)
	{
		if(max<a[index])
		{
			max=a[index];
		}
	}
	return max;
}
int SumArray(int *a, int size)
{
	int index, sum;
	for(sum=index=0; index<size; index++)
	{
		sum+=a[index]; // sum= sum+ *(a+index);
	}
	return sum;
}
void ReadArray(int a[], int size)
{
	int index;
	for(index=0; index<size; index++)
	{
		printf("a[%d]", index);
		//scanf("%d", &a[index]);
		//scanf("%d", &index[a]);
		//scanf("%d", (a+index));
		scanf("%d", (index+a));
	}
	printf("\n size of a=%d", sizeof(a)); //
		printf("\n a=%u",a );
		a++;
		printf("\n a=%u",a );

	return;
}
void PrintArray(int *a, int size)
{
	int index;

	for(index=0; index<size; index++)
	{
		//printf("\n %d [%u]", a[index], &a[index]);
		//printf("\n %d [%u]", index[a], &index[a);
		//printf("\n %d [%u]", *(a+index), (a+index));
		printf("\n %d [%u]", *(index+a), (index+a));
	}
	printf("\n size of a=%d", sizeof(a)); //
	printf("\n a=%u",a );
	a++;
	printf("\n a=%u",a );
	return;
}
int MenuChoice()
{
	int choice;
	printf("\n 1. Read Array \n 2. Print Array \n 3. Sum of Array \n 4. Max of Array  \n 5.  Max Min of Array ");
	printf("\n 6. Print Rev Array \n 7. Rev Array \n 8. Linear Search \n 9. Linear Search    \n 10. Sorting of Array  ");
	printf("\n Enter Your Choice ::");
	scanf("%d", &choice);
	return choice;

}

