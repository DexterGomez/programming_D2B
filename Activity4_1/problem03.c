/* Create a function to sort an array using the bubble sort method.
 * Author: Dexter Gomez */

#include <stdio.h>

// Function to sort the elements of an array
void	sort	(int[], int );

int main (void)
{
    int A[7] = {3,4,5,6,1,2,3};
    sort(A, 7);
    
    return 0;
}

void sort (int A[], int num)
{
	int aux;
	for (int i = 0; i < num ; i++)
	{
		for (int j = 0; j < (num - i - 1); j++)
		{
			if (A[j] > A[j+1])
			{
				aux = A[j];
				A[j] = A[j+1];
				A[j+1] = aux;
			}
		}
	}

	for (int i = 0; i < num; i++)
	{
		printf("%3d",A[i]);
	}
	printf("\n");
}
