/* Write a program that given a number of seconds convert it in the equivalent format: hrs:min:sec
 * Author: Dexter Gomez*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{	
	//variables
	int seconds = atoi(argv[1]);
	int minutes, hours;

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

	//output
        printf("%d:%d:%d\n",hours,minutes,seconds);

	return 0;
}
