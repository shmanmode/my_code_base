#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[], char* envp[])
{
	int no1, no2, ans;
	char op;

	if(argc!=4)
	{
		printf("\n Invalid Argruments");
		printf("\n ProgName No1 Operator No2\n");
	}
	else
	{
		no1= atoi(argv[1]); // atoi converts string to int
		op=argv[2][0]; //or op= *argv[2];
		no2= atoi(argv[3]);

		switch(op)
		{
			case '+' : ans= no1+no2; break;
			case '-' : ans= no1-no2; break;
			case '*' : ans= no1*no2; break;
			case '/' : ans= no1/no2; break;

			default : printf("\n invalid operator");
						exit(0);
		}
		printf("\n %d %c %d =%d", no1,op, no2, ans);


	}
	return 0;
}
