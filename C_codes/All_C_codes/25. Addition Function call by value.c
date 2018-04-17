#include<stdio.h>
//1. function decl or proto type function
//output FunctionName(input)
//Return_Type FunctionName(data_type parameter1);
int Addition(int n1, int n2);// decelration
int main(void)
{
	int no1=10, no2=20, ans=0;

	ans= Addition(no1, no2); // 3. function call
	     // no1, no2 are actual argruments
	printf("\n in main  %d [%u]+ %d [%u] = %d [%u]", no1,&no1,  no2,&no2 ,ans, &ans);
	return 0;
}
// function defination
// n1, n2 are formal argruments
int Addition(int n1,int n2)
{
 	int temp=0;

	temp= n1+n2;
	printf("\n in fun %d [%u] + %d [%u] = %d [%u", n1, &n1, n2, &n2, temp, &temp);
	return temp;
}
                //return type
// return 10;  //int
// return 'A'; // char
//return 10.4f; // float
//return 10.4;  // double
//return "ABC"; // char*
//return;     // void

