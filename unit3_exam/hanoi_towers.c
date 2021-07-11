/* This program solve the problem of Hanoi's towers for n disks in three pegs, to achieve that is used a recuersive function.
 *
 * Author: Dexter Gomez*/

#include <stdio.h>

/* This function reorder the disks from a peg to another peg.
 * Prints the steps to do to redeorder correctly the disks.
 *
 * Parameters:
 * 	num (integer): represent the number of disks.
 * 	peg1 (char): is the initial peg.
 * 	peg2 (char): is the final peg.
 * 	peg3 (char): is an axuliar peg
 *
 * Return nothing. */
void	hanoi_towers 	(int num,
			char peg1,
			char peg2,
			char peg3);

/*	Main function	*/
int main (void)
{
	int num;

	printf ("How many disks?: ");
	scanf ("%d",&num);

	printf ("\n");

	hanoi_towers (  num,
			'1',
			'2',
			'3');
	
	printf("\n");

	return 0;
}

void
hanoi_towers (  int num,
		char peg1,
		char peg2,
		char peg3)
{
	if (num == 1)
	{
		printf ("\n Move 1: %c --> %c", peg1, peg2);
		
		return;
	}

	hanoi_towers (  num - 1,
			peg1,
			peg3,
			peg2);

	printf ("\n Move %d: %c --> %c", num, peg1, peg2);

	hanoi_towers (  num - 1,
			peg3,
			peg2,
			peg1);
}
