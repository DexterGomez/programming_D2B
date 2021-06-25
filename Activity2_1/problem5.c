/* Author: Dexter Enrique Gomez Ek
 * Date: May 27, 2021
 * Instructions: Write a program to play “Paper, Rock or Scissors”. The program input must be a number: 0 (for rock), 1 (for paper) or 2 ( for scissors).*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
	int user_action;
	printf("Insert an option (0 for rock, 1 for paper, 2 for scissors): ");
	scanf("%d",&user_action);

	if(user_action < 0 || user_action > 2)
	{
		printf("This is a invalid option\n");
		return 0;
	}

	srand(time(NULL));//change the seed to create a different random number secuence;
	int computer_action = rand()%3;

	switch(user_action)
	{
		case 0:
			switch(computer_action)
			{
				case 0:
					printf("%d %d\n",user_action,computer_action);
					printf("It is a tie!\n");
					break;
				case 1:
					printf("%d %d\n",user_action,computer_action);
					printf("Computer win!\n");
					break;
				case 2:
					printf("%d %d\n",user_action,computer_action);
					printf("User win!\n");
					break;
			}
			break;
		case 1:
			switch(computer_action)
			{
				case 0:
					printf("%d %d\n",user_action,computer_action);
					printf("User win!\n");
					break;
				case 1:
					printf("%d %d\n",user_action,computer_action);
					printf("It is a tie!\n");
					break;
				case 2:
					printf("%d %d\n",user_action,computer_action);
					printf("Computer win!\n");
					break;
			}
			break;
		case 2:
			switch(computer_action)
                        {
                                case 0:
                                        printf("%d %d\n",user_action,computer_action);
                                        printf("Computer win!\n");
                                        break;
                                case 1:
                                        printf("%d %d\n",user_action,computer_action);
                                        printf("User win!\n");
                                        break;
                                case 2:
                                        printf("%d %d\n",user_action,computer_action);
                                        printf("It is a tie\n");
					break;
                        }
			break;

	}

	return 0;
}
