/* Write a C program that, given a seven-digit number, writes a file every possible seven-letter word corresponing to that number. That are 2187 such words. Avoid phone numbers with the digits 0 and 1.
 * Author: Dexter Gomez */

#include <stdio.h>

int main (void)
{
    FILE *filepointer;
    filepointer = fopen ("possible_results.dat","w");

    if (filepointer == NULL)
    {
        printf ("The file could not be opened.\n");
    }
    else
    {
        char number_letters[10][3] = {
            {'0','0','0'},
            {'1','1','1'},
            {'A','B','C'},
            {'D','E','F'},
            {'G','H','I'},
            {'J','K','L'},
            {'M','N','O'},
            {'P','R','S'},
            {'T','U','V'},
            {'W','X','Y'}};

        char number[7], word[7];
        int digits[7];
        scanf ("%s",number);
        
        for (int i = 0; i < 7; i++)
        {
            digits[i] = number[i] - '0';
            if (digits[i] == 0 || digits[i] == 1)
            {
                printf ("Invalid number...\n");
                return 0;
            }
            
        }
        
        for (int level0 = 0; level0 < 3; level0++)
        {
            word[0] = number_letters[digits[0]][level0];
            for (int level1 = 0; level1 < 3; level1++)
            {
                word[1] = number_letters[digits[1]][level1];
                for (int level2 = 0; level2 < 3; level2++)
                {
                    word[2] = number_letters[digits[2]][level2];
                    for (int level3 = 0; level3 < 3; level3++)
                    {
                        word[3] = number_letters[digits[3]][level3];
                        for (int level4 = 0; level4 < 3; level4++)
                        {
                            word[4] = number_letters[digits[4]][level4];
                            for (int level5 = 0; level5 < 3; level5++)
                            {
                                word[5] = number_letters[digits[5]][level5];
                                for (int level6 = 0; level6 < 3; level6++)
                                {
                                    word[6] = number_letters[digits[6]][level6];
                                    fprintf (filepointer, "%s\n", word);
                                }   
                            }   
                        }   
                    }
                }
            }
        }
        fclose (filepointer);
    }    

    return 0;
}
