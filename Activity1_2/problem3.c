/*Write a program that reads in five integers and then determines and prints the largest and the smallest integers in the group. Use only the programming techniques you have learned in this lesson.*/

#include <stdio.h>

int main()
{	
	int number1, number2, number3, number4, number5;
	printf("Insert 5 numbers: ");
	scanf("%d %d %d %d %d",&number1, &number2, &number3, &number4, &number5);
	
	if(number1 > number2 && number1 > number3 && number1 > number4 && number1 > number5)
	{
		if(number2 < number3 && number2 < number4 && number2 < number5)
		{
			printf("Max: %d\nMin: %d\n",number1,number2);
		}
		else if(number3 < number4 && number3 < number5)
		{
			printf("Max: %d\nMin: %d\n",number1,number3);
		}
		else if(number4 < number5)
		{
			printf("Max: %d\nMin: %d\n",number1,number4);
		}
		else
		{
			printf("Max: %d\nMin: %d\n",number1,number5);
		}
	}

	if(number2 > number1 && number2 > number3 && number2 > number4 && number2 > number5)
	{
		if(number1 < number3 && number1 < number4 && number1 < number5)
		{
			printf("Max: %d\nMin: %d\n",number2,number1);
		}
		else if(number3 < number4 && number3 < number5)
		{
			printf("Max: %d\nMin: %d\n",number2,number3);
		}
		else if(number4 < number5)
		{
			printf("Max: %d\nMin: %d\n",number2,number4);
		}
		else
		{
			printf("Max: %d\nMin: %d\n",number2,number5);
		}
	}

	if(number3 > number1 && number3 > number2 && number3 > number4 && number3 > number5)
	{
		if(number1 < number2 && number1 < number4 && number2 < number5)
		{
			printf("Max: %d\nMin: %d\n",number3,number1);
		}
    		else if(number2 < number4 && number2 < number5)
		{
			printf("Max: %d\nMin: %d\n",number3,number2);
		}
	    	else if(number4 < number5)
		{
			printf("Max: %d\nMin: %d\n",number3,number4);
		}
	    	else
		{
			printf("Max: %d\nMin: %d\n",number3,number5);
		}
	}

	if(number4 > number1 && number4 > number2 && number4 > number3 && number1 > number5)
	{
	    	if(number1 < number2 && number1 < number3&& number2 < number5)
		{
			printf("Max: %d\nMin: %d\n",number4,number1);
		}
	    	else if(number2 < number3 && number2 < number5)
		{
			printf("Max: %d\nMin: %d\n",number4,number2);
		}
	    	else if(number3 < number5)
		{
			printf("Max: %d\nMin: %d\n",number4,number3);
		}
	    	else
		{
			printf("Max: %d\nMin: %d\n",number4,number5);
		}
	}

	if(number5 > number1 && number5 > number2 && number5 > number3 && number5 > number4)
	{
	    	if(number1 < number2 && number1 < number3 && number1 < number4)
		{
			printf("Max: %d\nMin: %d\n",number5,number1);
		}
    		else if(number2 < number3 && number2 < number4)
		{
			printf("Max: %d\nMin: %d\n",number5,number2);
		}
	    	else if(number3 < number4)
		{
			printf("Max: %d\nMin: %d\n",number5,number3);
		}
	    	else
		{
			printf("Max: %d\nMin: %d\n",number5,number4);
		}
	}

	return 0;
}
