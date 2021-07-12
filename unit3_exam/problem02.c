/* Write a recursive function to calculate the sum of a list of numbers
 * Author: Dexter Gomez*/

#include <stdio.h>

int recursive_sum(int *, int);

int main (void)
{
	int list_numbers[] = {3,6,8,2,1};
	int len_list = (sizeof(list_numbers)/4);

	int sum = recursive_sum(list_numbers, len_list - 1);

	printf(": %d\n",sum);

	return 0;
}

int recursive_sum(int *list_numbers, int len_list)
{
	if( len_list == 0)
	{
		return list_numbers[0];
	}

	return list_numbers[len_list] + recursive_sum(list_numbers, len_list-1);
}
