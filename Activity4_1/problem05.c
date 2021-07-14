/* The program simulate a turtle on the floor.
 * Author: Dexter Gomez*/

#include <stdio.h>

// Global variables
int turtle_direction = 2; // 1: left, 2: up, 3: right, 4: down
int turtle_position_x = 0;
int turtle_position_y = 0;

// This function control what action should be done.
void	instruction	(int[50][50], int);

// Prints the commands that can be executed.
void	help		(void);

// Prints the direction and position of the turtle.
void	status		(void);

// Change the direction of the turtle.
void	turn_right	(void);
void	turn_left	(void);

// Move n spaces the turtle.
void	move		(int[50][50], int);
int 	verify_dist	(int);

// print the board to see the movement of the turtle.
void	print_board	(int[50][50]);


int main (void)
{
	int board[50][50] = {0};
	int command;

	printf("\n------------------TURTLE--------------------\n");
	printf("The turtle walks around the floor, you need to specify how many spaces\nand the direction should follow.\n");
	printf("Press 1 to get help and learn the commands.\n");
	printf("Author: Dexter Gómez\n");
	printf("-----------------------------------------------\n\n");

	do
	{
		printf(": ");
		scanf("%d",&command);
		instruction(board, command);
	}while(command != 9);

	return 0;
}

void instruction (int board[50][50], int command)
{
	int n;
	switch (command)
	{
		case 1: help (); break;
		case 2: status (); break;
		case 3: turn_right (); break;
		case 4: turn_left (); break;
		case 5: 	
			printf ("= ");
			scanf ("%d",&n);
			move (board, verify_dist(n)); 
			break;
		case 6:	print_board(board); break;
		case 9: break;
		default: printf ("Error: Invalid command\n");
	}
}

void help (void)
{
	printf("\n---------------------- HELP --------------------\n");
	printf("Commands: \n");
	printf("1: show help\n");
	printf("2: show the position and direction of the turtle\n");
	printf("3: turn right the direction of the turtle\n");
	printf("4: turn left the direction of the turtle\n");
	printf("5: insert n spaces to move the turtle\n");
	printf("6: show the board\n");
	printf("9: exit\n");
	printf("-------------------------------------------------\n\n");
}

void status (void)
{
	printf("\n----------------------STATUS----------------------\n");
	printf("Turtle position: [%2d,%2d]\n",turtle_position_x, turtle_position_y);

	switch(turtle_direction)
	{
		case 1: printf("Direction: left\n"); break;
		case 2: printf("Direction: up\n"); break;
		case 3: printf("Direction: right\n"); break;
		case 4: printf("Direction: down\n"); break;
	}

	printf("------------------------------------------------\n\n");
}

void turn_right (void)
{
	turtle_direction++;
	if(turtle_direction == 5)
	{
		turtle_direction = 1;
	}
}

void turn_left (void)
{
	turtle_direction--;
	if(turtle_direction == 0)
	{
		turtle_direction = 4;
	}
}

void move (int board[50][50], int n)
{
	switch(turtle_direction)
	{
		case 1: 
			for (int i = turtle_position_x; i >= turtle_position_x - n; i--)
			{
				board[turtle_position_y][i] = 1;
			}
			turtle_position_x -= n;
			break;
		case 2:
			for (int i = turtle_position_y ; i >= turtle_position_y - n; i--)
			{
				board[i][turtle_position_x] = 1;
			}
			turtle_position_y -= n;
			break;
		case 3:
			for (int i = turtle_position_x; i <= turtle_position_x + n; i++)
			{
				board[turtle_position_y][i] = 1;
			}
			turtle_position_x += n;
			break;
		case 4:
			for (int i = turtle_position_y; i <= turtle_position_y + n; i++)
			{
				board[i][turtle_position_x] = 1;
			}
			turtle_position_y += n;
	}
}

int verify_dist (int spaces)
{
	switch(turtle_direction)
	{
		case 1:
			if ( (turtle_position_x - spaces) < 0)
				return 0 + turtle_position_x;
			else
				return spaces;
			break;
		case 2:
			if ( (turtle_position_y - spaces) < 0)
				return 0 + turtle_position_y;
			else
				return spaces;
			break;
		case 3:
			if ( (turtle_position_x + spaces) > 50)
				return 50 - turtle_position_x;
			else
				return spaces;
			break;
		case 4:
			if ( (turtle_position_y + spaces) > 50)
				return 50 - turtle_position_y;
			else
				return spaces;
			break;
	}
}

void print_board (int board[50][50])
{
	for (int i = 0; i < 50; i ++)
	{
		for (int j = 0; j < 50; j++)
		{
			printf("%d",board[i][j]);
		}
		printf("\n");
	}
}
