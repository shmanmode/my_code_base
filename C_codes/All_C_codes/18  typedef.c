#include<stdio.h>
/*typedef enum color
{
	RED,BLACK, GREEN=5, YELLOW
}COLOR; */
enum color
{
	RED,BLACK, GREEN=5, YELLOW
};
typedef enum color COLOR;


int main(void)
{
	COLOR c;//enum color c;
	int no;
	printf("\n size of c=%d", sizeof(c));
	printf("\n size of enum color =%d", sizeof(enum color));

	printf("\n 0. Red \n 1. Black \n 5. Green \n  6. Yellow \n 0. Exit");
	printf("\n Enter Your color :: ");
	//scanf("%d", &c); // way1 scan enum variable c

	scanf("%d", &no);
	//c= (enum color)no; // way 2 scan no and assign to enum variable c

	//way3 using switch case and no
	switch(no)
	{
		case 0 : c=RED; break;
		case 1 : c=BLACK; break;
		case 5 : c=GREEN; break;
		case 6 : c=YELLOW; break;
	}


	switch(c)
	{
		case RED : printf("\n red color :: "); break;
		case BLACK : printf("\n Black color :: "); break;
		case GREEN : printf("\n Green color :: "); break;
		case YELLOW: printf("\n Yellow color :: "); break;
		default : printf("\n invalid color");
	}

	return 0;
}
