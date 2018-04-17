#include <stdio.h>
#include <stdlib.h>
typedef enum menuoperations
{
	Exit=0,Addition, Minus, Div , Multiply
}MENUOPEARIONS;
int main(void)
{
	int no1, no2, ans;
	MENUOPEARIONS choice;
	do
	{
		printf("\n Enter No1 :: ");
		scanf("%d", &no1);

		printf("\n Enter No2 :: ");
		scanf("%d", &no2);

		printf("\n 1. Add \n 2. Minus \n 3. Div \n 4. Multiply \n 0. Exit ");
		printf("\n enter Your Choice :: ");
		scanf("%d", &choice);

		switch (choice)
		{
			default : printf("\n invalid choice");
					continue;//break;
			case Addition :// add
					ans=no1+no2; break;
			case Minus :// minus
					ans=no1-no2; break;
			case Div :// div
					ans=no1/no2; break;
			case Multiply: // multiply
					ans= no1*no2; break;
			case Exit : exit(0);
		}
		printf("\n ans=%d", ans);

		printf("\n Enter 1 to Continue or 0 to Exit :: ");
		scanf("%d", &choice);

	}while(choice!=0);
	return 0;
}

