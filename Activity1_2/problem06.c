/* Write a program that given the coefficients of a cudratic function (y = ax^2 + bx + c) and the value of x, obtain the value of y
 * Author: Dexter Gomez */

#include <stdio.h>

int main()
{
	//variables
	int a,b,c,x,y;

	//input
	printf("Insert the values: ");
	scanf("%d %d %d %d",&a,&b,&c,&x);

	//function calculation
	y = (a*(x*x)) + (b*x) + c;

	//output
	printf("y = %d\n",y);

	return 0;
}
