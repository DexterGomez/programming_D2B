/*Write a program that given the coefficients of a cudratic function (y = ax^2 + bx + c) and the value of x, obtain the value of y */

#include <stdio.h>

int main()
{
	int a,b,c,x,y;

	printf("Insert the values: ");
	scanf("%d %d %d %d",&a,&b,&c,&x);

	y = (a*(x*x)) + (b*x) + c;

	printf("y = %d\n",y);

	return 0;
}
