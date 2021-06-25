/* Author: Dexter Enrique Gomez Ek
 * Date: May 27, 2021
 * Instructions: Write a program that given the coefficients of a quadratic equation retuns all possible real values of x */

#include <math.h>
#include <stdio.h>

int main(void)
{
	float a,b,c;
	printf("Introduce the coefficients: ");
	scanf("%f %f %f",&a,&b,&c);

	float discriminant = (b*b) - 4*a*c;
	float sqrt_value = sqrt(discriminant);
	
	if(discriminant > 0)
	{	
		float x1 = (-b + sqrt_value)/(2*a);
		float x2 = (-b - sqrt_value)/(2*a);

		printf("%.2f %.2f\n",x1,x2);
	}
	if(discriminant == 0)
	{
		float x = (-b)/(2*a);
		printf("%.2f\n",x);
	}
	if(discriminant < 0)
	{
		printf("No real rooots\n");
	}

	return 0;
}
