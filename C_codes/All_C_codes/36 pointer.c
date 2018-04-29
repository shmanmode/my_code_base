#include <stdio.h>
int main(void)
{
	{
	int i=10;
	//int *pi=&i;
	int *pi=NULL;
	pi=&i;

	printf("\n i=%d *(&i)=%d *pi=%d", i, *(&i), *pi);
	printf("\n &i=%u &pi=%u  pi=%u", &i, &pi, pi);

	*pi=20;
	printf("\n i=%d *(&i)=%d *pi=%d", i, *(&i), *pi);
	printf("\n &i=%u &pi=%u  pi=%u", &i, &pi, pi);

	printf("\n sizeof pi=%d", sizeof(pi));

	printf("\n pi=%u pi+1=%u", pi, pi+1);
	printf("\n pi=%u pi+5=%u", pi, pi+5);
	printf("\n pi=%u pi-1=%u", pi, pi-1);
	}


	{
		char i='A';
		char *pi=NULL;
		pi=&i;

		printf("\n i=%c *(&i)=%c *pi=%c", i, *(&i), *pi);
		printf("\n &i=%u &pi=%u  pi=%u", &i, &pi, pi);
		printf("\n sizeof pi=%d", sizeof(pi));
		printf("\n pi=%u pi+1=%u", pi, pi+1);
		printf("\n pi=%u pi-1=%u", pi, pi-1);
		printf("\n pi=%u pi+5=%u", pi, pi+5);
	}

	{
			float i=20.4;
			float *pi=NULL;
			pi=&i;

			printf("\n i=%f *(&i)=%f *pi=%f", i, *(&i), *pi);
			printf("\n &i=%u &pi=%u  pi=%u", &i, &pi, pi);
			printf("\n sizeof pi=%d", sizeof(pi));
			printf("\n pi=%u pi+1=%u", pi, pi+1);
			printf("\n pi=%u pi-1=%u", pi, pi-1);
			printf("\n pi=%p pi-1=%p", pi, pi-1);
			printf("\n pi=%u pi+5=%u", pi, pi+5);
			printf("\n pi=%u pi-5=%u", pi, pi-5);
			printf("\n pi=%u pi/5=%u", pi, pi/5);
			printf("\n pi=%u pi*5=%u", pi, pi*5);
		}

	return 0;
}
