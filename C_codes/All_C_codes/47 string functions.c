#include<stdio.h>
#include<string.h>
#define LEN 40
int MenuChoice();
int main(void)
{
	int choice,ans1;
	char src[LEN], dest[LEN], find, *ptr=NULL;
	size_t ans;
	do
	{
		choice=MenuChoice();

		if(choice>=1 && choice<=2)
		{
			printf("\n Enter src :: ");
			getchar();
			gets(src);
		}
		else if (choice>=3 && choice<=7)
		{
			printf("\n Enter src :: ");
			getchar();
			gets(src);
			printf("\n Enter Dest :: ");
			gets(dest);
		}


		switch(choice)
		{
			default:
					printf("invalid choice");
					continue;
			case 1:	//string length
					ans= strlen(src);
					printf("\n length of %s= %d ", src, ans);

					break;
			case 2:	//char search in string
					printf("\n Enter char to search :: ");
					scanf("%c", &find);
					ptr=strchr(src, find);
					if(ptr== NULL)
						printf("\n %c is not found in %s", find, src);
					else
						printf("\n %c is found in %s at %d location", find, src, ptr-src);

					break;
			case 3:	//string copy
					ptr= strcpy(dest, src);
					printf("\n dest=%s using parameter ", dest);
					printf("\n dest=%s using return statement ", ptr);
					printf("\n dest=%c using return statement ", *ptr);
					break;
			case 4:	//string concate
					ptr=strcat(dest, src);
					printf("\n dest=%s using parameter ", dest);
					printf("\n dest=%s using return statement ", ptr);
					break;
			case 5:	//string compare
					ans1=strcmp(src,dest);
					if(ans1>0)
						printf("\n %s is bigger than %s", src, dest);
					else if(ans1<0)
						printf("\n %s is smaller than %s", src, dest);
					else
						printf("\n %s is equal to %s", src, dest);



					break;
			case 6:	//string compare by ingoring case
					ans1=strcasecmp(src,dest);
					if(ans1>0)
						printf("\n %s is bigger than %s", src, dest);
					else if(ans1<0)
						printf("\n %s is smaller than %s", src, dest);
					else
						printf("\n %s is equal to %s", src, dest);

					break;
			case 7:	//sub string search in string
					ptr=strstr(src,dest);
					if(ptr== NULL)
						printf("\n %s is not found in %s", dest, src);
					else
						printf("\n %s is found in %s at %d location", dest, src, ptr-src);


					break;
		}
		printf("\n Enter 1 to continue or 0 to exit ");
		scanf("%d", &choice);

	}while(choice!=0);
	return 0;
}
int MenuChoice()
{
	int choice;
	printf("\n 1. strlen \n 2.strchr \n 3. strcpy \n 4. strcat");
	printf("\n 5. strcmp \n 6.strcasecmp (strcmpi) \n 7. strstr \n 0.Exit ");
	printf("\n Enter Your choice :: " );
	scanf("%d", &choice);
	return choice;
}

//return "abc" --->> char*



