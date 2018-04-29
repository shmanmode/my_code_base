#include<stdio.h>
int main(void)
{
	FILE *fpWrite=NULL;
	char ch;
	//fpWrite= fopen("file1.txt", "w");
	fpWrite= fopen("file1.txt", "a"); // check with w mode then use a mode
	if(fpWrite==NULL)
		printf("\n Unable to open file for writing");
	else
	{
		while((ch=fgetc(stdin))!=EOF)
		{
			fputc(ch, fpWrite);
		}
		fclose(fpWrite); //fcloseall();
		printf("\n Data is  added to file");
	}

	return 0;
}
