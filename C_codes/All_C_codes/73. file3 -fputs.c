#include<stdio.h>
#define SIZE 40
int main(void)
{
	FILE *fpWrite=NULL;
	char buff[SIZE];

	//fpWrite= fopen("\\home\\rahul\\P58\\FILE1.txt"); window
	fpWrite= fopen("/home/rahul/P58/FILE1.txt", "w");  // use w mode then use a mode
	if(fpWrite==NULL)
		printf("\n Fail to open file for writing");
	else
	{
		while(fgets(buff, SIZE, stdin)!=NULL)
		{
			fputs(buff, fpWrite);
		}
		fclose(fpWrite);
		printf("\n data is added to file \n");
	}
	return 0;
}
