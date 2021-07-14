/*
 * Author: Dexter Gomez*/

#include <stdio.h>
#define SIZE1 8

// Product a * b
void	operationA	(const int[], int);

// Addition b + c
void	operationB	(const int[], const int[]);

// Escalar product B ° A
void	operationC	(const int[], int);

// Product A * D
void	operationD	(const int[4][3], int);

// Substraction E - D
void	operationE	(const int[4][3], const int[4][3]);

// Hadamard product D ° E
void	operationF	(const int[4][3], const int[4][3]);

// Matrix multiplicaton E * F
void	operationG	(const int[4][3], const int[3][2]);

int main (void)
{
	int a = 3;
	int b[SIZE1] = {23, 48, 75, 23, 10, 23, 35, 60};
	int c[SIZE1] = {45, 95, 70, 13, 7, 32, 23, 80};
	int d[4][3] = {
		{12, 34, 56},
		{32, 45, 35},
		{28, 78, 65},
		{14, 63, 10}};
	int e[4][3] = {
		{11, 21, 43},
		{23, 32, 57},
		{45, 33, 18},
		{76, 75, 23}};
	int f[3][2] = {
		{13, 32},
		{34, 54},
		{61, 21}};

	printf("Operation A: \n");
	operationA(b, a);

	printf("Opearion B: \n");
	operationB(b, c);

	printf("Operation C: \n");
	operationC(b, a);

	printf("Operation D: \n");
	operationD(d, a);

	printf("Operation E: \n");
	operationE(e, d);

	printf("Operation F: \n");
	operationF(d, e);

	printf("Operation G: \n");
	operationG(e, f);

	return 0;
}

void operationA (const int vector[SIZE1], int numA)
{
	int aux_vector[SIZE1] = {0};

	for (int i = 0; i < SIZE1; i++)
	{
		aux_vector[i] = vector[i] * numA;
	}

	for (int i = 0; i < SIZE1; i++)
	{
		printf("%4d", aux_vector[i]);
	}
	printf("\n");
}

void operationB (const int VectorA[SIZE1], const int VectorB[SIZE1])
{
	int aux_vector[SIZE1] = {0};
	
	for (int i = 0; i < SIZE1; i++)
	{
		aux_vector[i] = VectorA[i] + VectorB[i];
	}

	for (int i = 0; i < SIZE1; i++)
	{
		printf("%4d", aux_vector[i]);
	}
	printf("\n");
}

void operationC (const int vector[SIZE1], int num)
{
	int result = 0;

	for (int i = 0 ; i < SIZE1; i++)
	{
		result = result + vector[i]*num;
	}

	printf("%4d\n", result);
}

void operationD (const int vector[4][3], int num)
{
	int aux_vector[4][3] = {{0}};
	
	for (int i = 0; i < 4; i ++)
	{
		for (int j = 0; j < 3; j++)
		{
			aux_vector[i][j] = vector[i][j] * num;
		}
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%4d ",aux_vector[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

void operationE (const int vectorA[4][3], const int vectorB[4][3])
{
	int aux_vector[4][3] = {{0}};

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			aux_vector[i][j] = vectorA[i][j] - vectorB[i][j];
		}
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%4d ", aux_vector[i][j]);
		}
		printf("\n");
	}
}

void operationF (const int vectorA[4][3], const int vectorB[4][3])
{
	int aux_vector[4][3] = {{0}};

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			aux_vector[i][j] = vectorA[i][j] * vectorB[i][j];
		}
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%7d", aux_vector[i][j]);
		}
		printf("\n");
	}
}

void operationG (const int vectorA[4][3], const int vectorB[3][2])
{
	int aux_vector[4][2] = {{0}};

	for (int i = 0; i < 4; i++)
	{
		//vectorA[i][]
		for (int j = 0; j < 2; j++)
		{
			//vectorB[][j]
			for (int k = 0; k < 3; k++)
			{
				aux_vector[i][j] += vectorA[i][k] * vectorB[k][j];
			}
		}
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("%7d ", aux_vector[i][j]);
		}
		printf("\n");
	}
}
