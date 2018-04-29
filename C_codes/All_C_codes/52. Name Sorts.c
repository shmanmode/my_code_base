#include<stdio.h>
#include<string.h>
#define NO 5      // no of students
#define LEN 10    // each student name can be 10 char long
void DisplayNames(char n[][LEN], int no);
int main(void)
{
	char names[NO][LEN], temp[LEN];   // 5*10 == 50*1= 50 bytes
	int i, j;

	printf("\n size of names=%d", sizeof(names));

	printf("\n Enter Names of students :: ");
	for(i=0; i<NO; i++)
	{
		printf("\n names[%d]", i);
		scanf("%s", &names[i]);
	}

	printf("\n Names of students :: ");
	DisplayNames(names, NO);
	/*for(i=0; i<NO; i++)
	{
		printf("\n %d]%s",i, names[i]);
	}*/

	printf("\n Sorting of names :: ");
	for(i=0; i<NO; i++)
	{
		for(j=i+1; j<NO; j++)
		{
			printf("\n names[%d]%s names[%d]%s", i, names[i], j, names[j]);
			//if(strcmp(names[i], names[j])>0)  // asc
			if(strcmp(names[i], names[j])<0) // des
			{
				strcpy(temp, names[i]);
				strcpy(names[i], names[j]);
				strcpy(names[j], temp);
			}
		}
	}

	printf("\n Names of students after sort :: ");
	DisplayNames(names, NO);

	/*for(i=0; i<NO; i++)
	{
		printf("\n %d]%s",i, names[i]);
	}*/

	return 0;
}
void DisplayNames(char n[][LEN], int no)
{
	int i;
	for(i=0; i<no; i++)
	{
		printf("\n %d]%s",i, n[i]);
	}
	return;
}
