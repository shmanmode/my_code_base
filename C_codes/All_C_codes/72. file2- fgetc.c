#include<stdio.h>
int main(void)
{
	FILE *fpRead=NULL;
	char ch;
	int cnt, alphabets, digits, spaces, tabs, lines;
	fpRead= fopen("file1.txt", "r");
	if(fpRead==NULL)
		printf("\n Unable to open file for Reading");
	else
	{
		cnt= alphabets= digits= spaces= tabs= lines=0;

		while((ch=fgetc(fpRead))!=EOF)
		{
			cnt++;
		//	getchar();
			fputc(ch, stdout);
			if((ch>=65 &&ch<=90) ||(ch>=97 && ch<=122))
				alphabets++;
			else if(ch>=48 &&ch<=57)
					digits++;
			else if(ch=='\n')
					lines++;
			else if(ch=='\t')
					tabs++;
			else if(ch==' ' || ch==32)
					spaces++;



		}
		fclose(fpRead); //fcloseall();
		printf("\n%d  char  read from file" , cnt);
		printf("\n%d  alphabets  read from file" , alphabets);
		printf("\n%d  digits  read from file" , digits);
		printf("\n%d  lines  read from file" ,lines);
		printf("\n%d  tabs  read from file" ,tabs);
		printf("\n%d  spaces  read from file" , spaces);
	}

	return 0;
}
