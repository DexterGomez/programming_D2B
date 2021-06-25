/* Author: Dexter Enrique Gómez Ek
 * Date: May 27,2021
 * Instructions: Write a program that reads three nonzero float values and determines and prints if they could represent the sides of a triangle. In the case of a triangle print 1 and if not, print 0.*/

/*The "teorema de desigualdad del triangulo" was used to solve this problem*/

#include <stdio.h>

int main(void)
{
	float n1,n2,n3;
	printf("Introduce three nonzero numbers: ");
	scanf("%f %f %f",&n1,&n2,&n3);

	if( (n1+n2) > n3 && (n1+n3) > n2 && (n2+n3) > n1 )
	{
		printf("1\n");
	}
	else
		printf("0\n");
	return 0;
}
