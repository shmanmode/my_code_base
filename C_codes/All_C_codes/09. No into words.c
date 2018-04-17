#include <stdio.h>
#include<stdlib.h>
int main(void)
{
	int no, unit, tenth;

	printf("\n Enter No :: ");
	scanf("%d", &no);

	if(no==0)
		printf("\n zero");
	else
	{
		unit=no%10; // unit place
		tenth= no/10; // tehth place

		switch(tenth)
		{
			case 1:
					switch(unit)
					{
						case 0: printf(" Ten "); break;
						case 1: printf(" Elevan "); break;
						case 2: printf(" Twelve "); break;
						case 3: printf(" Thirteen "); break;
					}
				break;
			case 2: printf(" Twenty "); break;
			case 3: printf(" Thirty "); break;
		}
		// end of switch for theth
		if(tenth!=1)
		{
			switch(unit)
			{
				case 1: printf(" One "); break;
				case 2: printf(" Two "); break;
				case 3: printf(" Three "); break;
			}
			// end of switch for theth
		}
	}
	return 0;
}
