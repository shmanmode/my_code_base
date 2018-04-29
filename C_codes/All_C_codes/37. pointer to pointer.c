#include<stdio.h>
int main(void)
{
	int x=10;
	int *px=&x;
	int **ppx=&px;

	printf("\n x=%d *(&x)=%d *px=%d **ppx=%d *ppx=%u", x, *(&x), *px, **ppx, *ppx);
	printf("\n &x=%u &px=%u  &ppx=%u", &x, &px, &ppx);
	printf("\n px=%u ppx=%u", px,  ppx);
	printf("\n sizeof px=%d", sizeof(px));
	printf("\n sizeof ppx=%d", sizeof(ppx));

	*px=20;
	printf("\n x=%d *(&x)=%d *px=%d **ppx=%d *ppx=%u", x, *(&x), *px, **ppx, *ppx);
	printf("\n &x=%u &px=%u  &ppx=%u", &x, &px, &ppx);
	printf("\n px=%u ppx=%u", px,  ppx);

	**ppx=30;
	printf("\n x=%d *(&x)=%d *px=%d **ppx=%d *ppx=%u", x, *(&x), *px, **ppx, *ppx);
	printf("\n &x=%u &px=%u  &ppx=%u", &x, &px, &ppx);
	printf("\n px=%u ppx=%u", px,  ppx);
	return 0;
}
