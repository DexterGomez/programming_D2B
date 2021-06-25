/*Instruction: The identification of the maximum of a group of numbers is used frequently in computer applications. Write a program that inputs a series of integer numbers as command-line arguments and determines and prints the largest of the integer numbers. 
*Author: Dexter Enrique Gómez Ek */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int maximo = atoi(argv[1]);

	for(int i = 1; i < argc; i++)
	{
		if(maximo < atoi(argv[i]))
		{
			maximo = atoi(argv[i]);
		}
	}

	printf("The max number is: %i\n",maximo);

	return 0;
}
