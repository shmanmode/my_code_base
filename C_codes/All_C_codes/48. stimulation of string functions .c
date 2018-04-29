#include<stdio.h>
#include<string.h>
#define LEN 40
int MenuChoice();
size_t mystrlen( const char* s);
char* mystrchr(const char s[], int key);
char* mystrcpy(char *d, const char *s);
char* mystrcat(char *d, const char *s);
int mystrcmp(const char *s1, const char *s2);
char* mystrupr(char *s);
char* mystrlwr(char *s);
char* mystrrev(char *s);
int main(void)
{
	int choice,ans1;
	char src[LEN], dest[LEN], find, *ptr=NULL;
	size_t ans;
	do
	{
		choice=MenuChoice();

		if((choice>=1 && choice<=2) || (choice>=8 && choice<=10))
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
					ans= mystrlen(src);
					printf("\n length of %s= %d ", src, ans);

					break;
			case 2:	//char search in string
					printf("\n Enter char to search :: ");
					scanf("%c", &find);
					ptr=mystrchr(src, find);
					if(ptr== NULL)
						printf("\n %c is not found in %s", find, src);
					else
						printf("\n %c is found in %s at %d location", find, src, ptr-src);

					break;
			case 3:	//string copy
					ptr= mystrcpy(dest, src);
					printf("\n dest=%s using parameter ", dest);
					printf("\n dest=%s using return statement ", ptr);
					printf("\n dest=%c using return statement ", *ptr);
					break;
			case 4:	//string concate
					ptr=mystrcat(dest, src);
					printf("\n dest=%s using parameter ", dest);
					printf("\n dest=%s using return statement ", ptr);
					break;
			case 5:	//string compare
					ans1=mystrcmp(src,dest);
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
			case 8: // upper case
					ptr= mystrupr(src);
					printf("\n src %s using parameter ", src);
					printf("\n src=%s using return statement ", ptr);
					break;
			case 9: // lower case
					ptr= mystrlwr(src);
					printf("\n src %s using parameter ", src);
					printf("\n src=%s using return statement ", ptr);
					break;
			case 10: // rev

					ptr= mystrrev(src);
					printf("\n src=%s using parameter ", src);
					printf("\n src=%s using return statement ", ptr);
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
	printf("\n 5. strcmp \n 6.strcasecmp (strcmpi) \n 7. strstr \n 8. strupr \n 9. strlwr \n 10 strrev \n 0.Exit ");
	printf("\n Enter Your choice :: " );
	scanf("%d", &choice);
	return choice;
}

size_t mystrlen(const char* s)
{
	/*
	 unsigned int i;
	i=0;
	while(*(s+i)!='\0')
	{
		i++;
	}
	return i;*/
	unsigned int i;

	//for(i=0; s[i]!='\0'; i++);

	for(i=0; s[i]!='\0'; i++)
	{}

	return i;


}
char* mystrchr(const char s[], int key)
{
	int i;
	for(i=0; s[i]!='\0'; i++) // for(i=0; *(s+i)!='\0'; i++)
	{
		if(s[i]==key)            // if(*(s+i)==key)
			return &s[i];			 // return (s+i);
	}
	return NULL;
}
//return "abc" --->> char*

char* mystrcpy(char *d, const char *s)
{
	int i;

	for(i=0; *(s+i)!='\0'; i++ )
	{
		*(d+i)=*(s+i);
	}
	*(d+i)='\0'; // copy null at end
	return d;
}
char* mystrcat(char *d, const char *s)
{
	int i, j;
	for(i=0; *(d+i)!='\0'; i++); // go to end of dest

	for(j=0; *(s+j)!='\0'; j++) // go to end of src
	{
		*(d+i+j)= *(s+j);
	}
	*(d+i+j)='\0';// copy \0 at end
	return d;

}
int mystrcmp(const char *s1, const char *s2)
{
	int i;

	for(i=0; *(s1+i )!= '\0' || *(s2+i)!='\0'; i++ )
	{
		if( *(s1+i)!= *(s2+i))
			return *(s1+i) - *(s2+i);
	}
	return 0;
}
char* mystrupr(char *s)
{
	int i;
	for(i=0; *(s+i)!='\0' ; i++)
	{
		if(*(s+i)>=97 && *(s+i)<=122)
		{
			*(s+i)-=32;
		}
	}
	return s;
}
char* mystrlwr(char *s)
{
	int i;
	for(i=0; *(s+i)!='\0' ; i++)
	{
		if(*(s+i)>=65 && *(s+i)<=90)
		{
			*(s+i)+=32;
		}
	}
	return s;
}
char* mystrrev(char *s)
{
	int i, j;
	unsigned int len;
	char temp;
	len= mystrlen(s);
	for(i=0, j=len-1 ;i<len/2; i++, j-- )
	{
		temp=s[i];
		s[i]=s[j];
		s[j]=temp;
	}
	return s;
}
