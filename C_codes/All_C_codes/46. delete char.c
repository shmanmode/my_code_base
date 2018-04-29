#include<stdio.h>
#define LEN 40
int main(void)
{
	char src[LEN], delete;
	int i, j;

	printf("\n Enter src :: ");
	gets(src);

	printf("\n Enter char to delete :: ");
	scanf("%c",&delete );

	i=0;
	while(src[i]!='\0')
	{

		if(src[i]==delete)
		{
			j=i;
			while(src[j]!='\0')
			{
				src[j]=src[j+1];
				j++;
			}
			i--;// to delete repeated char
		}
		i++;
	}

	printf("\n %s after delete %c", src, delete);

	return 0;
}
