#include<stdio.h>
int main(void)
{
	int i;
	/*for(i=65 ; i<=122 ; i++)
	{
		if((i>=91 && i<=96))
			continue;
		printf("\n %d - %c", i, i);
	}*/

	/*for(i=65 ; i<=122 ; i++)
	{
		if((i>=91 && i<=96))
			break;
		printf("\n %d - %c", i, i);
	}*/
/*	for(i=65 ; i<=122 ; i++)
	{
		if(!(i>=91 && i<=96))
			printf("\n %d - %c", i, i);
	}*/
	for(i=65 ; i<=122 ; i++)
	{
			if((i>=91 && i<=96))
			{
			}
			else
				printf("\n %d - %c", i, i);
		}

	return 0;
}
