#include<stdio.h>
#define SIZE 80
int main()
{
	char word[SIZE];
	int cnt = 0;
	FILE *fpRead = NULL;

	if ((fpRead = fopen("data.txt", "r")) != NULL)
	{
		while (fscanf(fpRead, "%s", word) != EOF)
		{
			cnt++;
			printf("\n %d] %s", cnt, word);
		}
		fprintf(stdout,"\n %d words read form file\n", cnt);
		fcloseall();
	}
	else
		fprintf(stdout,"\n not able to read data from file\n");

	return 0;
}

