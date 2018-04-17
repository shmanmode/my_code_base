#include<stdio.h>
#define sq(a) a*a
#define sq1(a) (a)*(a)
int main(void)
{
	int x=5, y=0;

	y= sq(x) ; // y= x*x;
	printf("\n x=%d y=%d", x, y);

	y= sq(x+x) ; // x+x * x+x  == 5+5*5+5 == 5+25+5 = 35
	printf("\n x=%d y=%d", x, y);

	y= 25/ sq(x) ; // 25 / 5* 5   5*5 ==25
	printf("\n x=%d y=%d", x, y);

	y= sq1(x+x) ; // (x+x)*(x+x) (5+5)*(5+5) == 10*10
	printf("\n x=%d y=%d", x, y);


	return 0;
}
