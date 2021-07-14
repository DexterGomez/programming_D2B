/* Create a function to find a key_value using linear reseach in an array
 * Author: Dexter Gomez*/

#include <stdio.h>
#define SIZE 8


// function of the linear reseach
int	LinearSearch	(const int[], int, int);

int main (void)
{
	int A[SIZE] = {4, 5, 6, 3, 21, 2, 7, 9};

	int result = LinearSearch(A, SIZE, 13);

	printf("%2d\n",result);

	return 0;
}

int LinearSearch (const int A[SIZE], int sizeArray, int keyValue)
{
	for (int i = 0; i < sizeArray; i++)
	{
		if (A[i] == keyValue)
		{
			return i;
		}
	}

	return -1;
}
