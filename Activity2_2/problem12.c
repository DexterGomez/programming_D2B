/*Given two numbers A, B and C, the Least Common Multiple (LCM) is the smallest number that is divisible by both numbers. For example, the LCM of 3, 9 and 6 is 18.
*Author: Dexter Enrique Gómez Ek*/

#include <stdio.h>

int LCM(int,int);

int main(void)
{

	int x, y, z;
	int aux1, aux2;

	printf(": ");
	scanf("%d %d %d",&x,&y,&z);

	if( x < y )
	{
		aux1 = LCM( x , y );
	}
	else
	{
		aux1 = LCM( y , x );
	}

	if( aux1 > z )
	{
		aux2 = LCM( aux1 , z );
	}
	else
	{
		aux2 = LCM( z , aux1 );
	}

	printf("%d\n",aux2);

	return 0;
}

int LCM(int x,int y)
{
	int temp = x;

	while(1)
	{
		if( (temp % y) == 0 && (temp % x) == 0)
		{
			break;
		}
		temp++;
	}

	return temp;
}
