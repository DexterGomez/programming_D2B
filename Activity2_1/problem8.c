/* Author: Dexter Enrique Gomez EK
 * Date: May 27, 2021
 * Instructions: Write a program that reads the grades of a student, between 6.0 and 10.0, for each of the three units of the course, and retuns the average of the three unless a unit wasn't approved (minimmun 7.0), in which case, the final grade will be 6.0*/

#include <stdio.h>

int main(void)
{
	float u1,u2,u3;
	printf("Introduce the grades: ");
	scanf("%f %f %f",&u1,&u2,&u3);

	if( u1 < 7.0 || u2 < 7.0 || u3 < 7.0 )
	{
		printf("6.0\n");
		return 0;
	}

	float result = (u1 + u2 + u3)/3;

	printf("%.2f\n",result);

	return 0;
}
