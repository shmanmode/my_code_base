#include<stdio.h>
#define SIZE 9
int main(void)
{
	FILE *fpRead=NULL;
	char buff[SIZE];


	fpRead= fopen("/home/rahul/P58/FILE1.txt", "r");
	if(fpRead==NULL)
		printf("\n Fail to open file for reading");
	else
	{
		while(fgets(buff, SIZE, fpRead)!=NULL)
		{
			fputs(buff, stdout);
			getchar();
		}
		fclose(fpRead);
		printf("\n data is read from file \n");
	}
	return 0;
}
