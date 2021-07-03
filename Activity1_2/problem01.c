/* Write a problem that given a number of seconds convert it in the equivalent format
 * Author: Dexter Gomez */

#include <stdio.h>

int main(void)
{	
	//Intialization of the variables of time
	int seconds;
	int minutes = 0, hours = 0;

	//Input: seconds as an integer value
	printf("Insert the seconds: ");
	scanf("%d",&seconds);

	//Convert seconds to minutes
	while(seconds > 59)
	{
		minutes++;
		seconds = seconds - 60;
	}
	
	//Convert minutes to hours
	while(minutes > 59)
	{
		hours++;
		minutes = minutes - 60;
	}
	
	//Output: hours:minutes:seconds
	printf("%d:%d:%d\n",hours,minutes,seconds);

	return 0;
}
