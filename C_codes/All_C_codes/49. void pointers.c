#include<stdio.h>
int main(void)
{
	int a = 3;
	char c = 'A';
	float f=19.2f;


	void *p=NULL; /*void pointer declaration*/

	p = &a; /*pointer initialization with int address. no cast required*/

	//printf("*p=%d", *p);

	printf("\n*p=%d ", *(int*)p); /*need cast to use value at operator*/

	p = &c; /*assigning char address. no cast required*/

	printf("\n*p=%c\n", *(char*)p); /*need cast to use value at operator*/

	p=&f;
	printf("\n*p=%f\n", *(float*)p); /*need cast to use value at operator*/

		//++p; /*compiler error. pointer arithmetic not allowed*/

	return 0;
}
