#include <stdio.h>
#include <string.h>
#define LEN 40
int main(void)
{
	// string
	char city1[]="pune";
	char city2[]={'p', 'u', 'n', 'e', '\0'};
	char city3[LEN]="Karad";
	char city4[LEN]={'k', 'a', 'r', 'a','d', '\0'};

	// array of char
	char city5[LEN]={'k', 'a', 'r', 'a','d'};

	printf("\n size of %s is %d", city1,sizeof(city1));
	printf("\n length of %s is %d", city1,strlen(city1));

	printf("\n size of %s is %d", city2,sizeof(city2));
	printf("\n length of %s is %d", city2,strlen(city2));

	printf("\n size of %s is %d", city3,sizeof(city3));
	printf("\n length of %s is %d", city3,strlen(city3));

	printf("\n size of %s is %d", city4,sizeof(city4));
	printf("\n length of %s is %d", city4,strlen(city4));


	printf("\n enter city3 :: ");
//	scanf("%s", city3); // scan upto space
	//gets(city3); // scan upto new line char
	scanf("%[^.]s", city3);

	puts(city3);
	printf("\n city3=%s", city3);

	char*ptr= city1;
	while(*ptr!='\0')
	{
		printf("\t%c", *ptr);
		ptr++;
	}

    return 0;
}
