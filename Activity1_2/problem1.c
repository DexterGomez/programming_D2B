/*
Write a problem that given a number of seconds convert it in the equivalent format
*/

#include <stdio.h>

int main(void)
{
	int input;
	int minutes = 0;
	int seconds = 0;
	int hours = 0;

	printf("Insert the seconds: ");
	scanf("%d",&input);

	seconds = input;

	while(seconds > 59)
	{
		minutes++;
		seconds = seconds - 60;
	}

	while(minutes > 59)
	{
		hours++;
		minutes = minutes - 60;
	}

	printf("%d:%d:%d\n",hours,minutes,seconds);

	return 0;
}
