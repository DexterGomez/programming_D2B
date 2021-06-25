#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int number = 0;
	int maxNumbers = 0;
	
	printf("Write an integer number:\n");
	scanf("%i", &number);
		
	if (number >= 2)		
		maxNumbers = number - 1 + number;	
	
	int i, j, removes, counter, current;
	counter = 0;
	
	for (i = 0; counter < maxNumbers; counter++){	
		removes = 0;
		current = number;
		for (j = 0; j < maxNumbers; j++){
			printf("%i", current);			
						
			if (j >= (maxNumbers / 2))
			{
				if (j >= maxNumbers - 1 - removes)
					current++;
			}
			else{
				if (removes < i){
					current--;	
					removes++;
				}	
			}
		}		
		
		if (counter >= (maxNumbers / 2))
			i--;
		else
			i++;
			
		printf("\n");
	}
	
	return 0;
}