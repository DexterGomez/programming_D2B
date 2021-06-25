/*A right triangle can have sides that are all integers. The set of three integer values for the sides of a right triangle is called a Pythagorean triple. These three sides must satisfy the relationship that the sum of the squares of two of the sides is equal to the square of the hypotenuse. Find all Pythagorean triples for side1, side2, and the hypotenuse all no larger than 500. Use a triple-nested for loop that simply tries all possibilities.
 *Author: Dexter Enrique Gómez Ek*/

#include <stdio.h>

int main(void)
{
	int aux, aux2;

	for(int cat1 = 1; cat1 < 500; cat1++)
	{
		for(int cat2 = 1; cat2 < 500; cat2++)
		{
			for(int hypot = 1; hypot <= 500; hypot++)
			{
				aux = (cat1*cat1) + (cat2*cat2);
				aux2 = hypot * hypot;

				if(aux == aux2)
				{
					printf("%i  %i  %i  \n",hypot,cat1,cat2);
				}
			}
		}
	}

	return 0;
}
