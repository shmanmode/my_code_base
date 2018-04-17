#include<stdio.h>
#include<limits.h>
int main(void)
{

	printf(" int %%d %d  %d to %d", sizeof(int), INT_MIN, INT_MAX);
	
	short int a=300 , b=300, ans=0;
	ans=a*b;
	printf("\n ans %d", ans);

	{
		int no=10;
		float ans;
		ans=(float) no/3;
		ans=no/3.0 ;
		printf("\n ans =%.2f", ans);
	}

	printf("\n sizeof(2)=%d sizeof(2.2)=%d sizeof(2.2f)=%d", sizeof(2L), sizeof(2.2), sizeof(2.2F));
	

	printf("\\n =%d ", '\n');
	printf("\\t =%d ", '\t');
	printf("\\a =%d ", '\a');
	printf("\\r =%d ", '\r');
	printf("\\b =%d ", '\b');
	

	return 0;
}

