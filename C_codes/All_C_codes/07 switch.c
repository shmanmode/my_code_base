#include <stdio.h>
#include<stdlib.h>
int main(void)
{
	int no1, no2, ans;
	char op;

	printf("\n Enter No1 :: ");
	scanf("%d", &no1);

	printf("\n Enter op :: ");
	getchar();
	scanf("%c", &op);
//	scanf("%*c%c", &op);  // %*c ingore char \n

	printf("\n Enter No2 :: ");
	scanf("%d", &no2);

	ans=0;

	/*
	// simple if
	if(op=='+')
		ans= no1+no2;
	if(op=='-')
		ans= no1-no2;
	if(op=='*')
		ans= no1*no2;
	if(op=='/')
			ans= no1/no2;*/
	// nested if
	/*if(op=='+')
		ans= no1+no2;
	else if(op=='-')
		ans= no1-no2;
	else if(op=='*')
		ans= no1*no2;
	else if(op=='/')
	{
		if(no2==0)
		{
			printf("\n can not divide by zreo");
			return 0;
			//exit(0);//
		}
		else
			ans= no1/no2;
	}
	else
	{
		printf("\n invalid operator");
		exit(0);
	}
	*/

	switch(op)
	{
		case '+' :	// addition
				 ans= no1+no2; break;//continue;
		case '-' :	// sub
				 ans= no1-no2; break;
		case '*' :	// multiply
				ans= no1*no2; break;
		case '/' :	// div
				if(no2==0)
				{
					printf("\n can not divide by zero");
					exit(0);
				}
				else
					ans= no1/no2;
				break;
		default: printf("\n invalid operator");
				 exit(0); // break;
	}

	printf(" %d %c %d = %d", no1, op, no2, ans);




	return 0;
}
