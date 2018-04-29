#include<stdio.h>
int main(int argc, char *argv[], char* envp[])
{
	int i;
	for(i=0; i<argc; i++)
	{
		printf("\n %d] %s", i, argv[i]);
	}
	return 0;
}
