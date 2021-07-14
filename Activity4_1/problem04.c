/**/

#include <stdio.h>
#define SIZE 9

int LinearSearch(const int[], int, int);

void unique(const int[], int);

int main (void)
{
	int A[SIZE] = {4, 7, 2, 4, 23, 1, 1, 23, 2};

	unique(A, SIZE);

	return 0;
}

int LinearSearch (const int A[7], int sizeArray, int keyValue)
{
        for (int i = 0; i < sizeArray; i++)
        {
                if (A[i] == keyValue) return 1;
        }
        return -1;
}

void unique (const int A[SIZE], int size)
{
	int aux[SIZE] = {0};

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (LinearSearch(aux, size, A[j]) == -1)
				aux[i] = A[j];
		}
	}

	for (int i = 0; i < size; i++)
	{
		if (aux[i] != 0)
			printf("%4d ",aux[i]);
	}
	printf("\n");
}
