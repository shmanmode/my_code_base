#include<stdio.h>
int main(void)
{
	int no1;
	char ch;

	printf("\n Enter No1 ::");
	scanf("%d",&no1);

	printf("\n no1=%d ", no1);

	printf("\n Enter Ch ::");
        getchar();
	scanf("%c",&ch);
	//scanf("%*c%c",&ch);

	printf("\n ch=%d ch=%c", ch, ch); // to display char with its ascii value


	scanf("Enter No1 %d ", &no1);
	printf("\n no1=%d ", no1);  // grabage value

	return 0;
}

