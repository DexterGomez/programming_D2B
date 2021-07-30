/* This a basic program of hangman, uses words from an external file called "words.dat" and store them in an array, then select one word randomly.
You can select the game mode (easy, medium, hard).
The program uses two other libreries: stdlib.h and time.h to select a random number and then select a random word.
 * Author: Dexter Gomez */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char words[20][7];

/*Read the words from an external file called "words.dat" an store the words in a string called "words".
There are 20 different words with 7 characters of lenght.*/
void read_word (void);

//Select one word randomly from an array.
int select_word (void);

/* Find a char in the word string using a "for" loop.
Return 1 if the character is in the word string, if not then it return 0. */
int find_char (const char[], char, long);

//Chek if all the letters of the hide word are already found.
int win (const char[], long);

int main (void)
{
    //-----------------VARIABLES DECLARATION-------------------------
    char hide[] = "*******";
    read_word();
    int n_word = select_word();

    int mode, max_attemps, i = 0;
    char word[7];
   
    char input;


    for (int i = 0; i < 7; i++)
    {
        word[i] = words[n_word][i];
    }
    
    //---------------- SELECT GAME MODE ------------------------------

    printf("Select game mode:\n1. Easy (7 mistakes)\n2. Medium (5 mistakes)\n3. Hard (3 mistakes)\n:");
    scanf("%d",&mode);

    //-----------------DEFINE NUMBER OF ATTEMPS-----------------------

    switch (mode)
    {
        case 1: max_attemps = 7; break;
        case 2: max_attemps = 5; break;
        case 3: max_attemps = 3; break;
        default:    printf("This is not an option."); return 0;
    }

    //-----------------MAIN STRUCTURE OF THE GAME--------------------

    while (i < max_attemps)
    {
        /*-------------------------------------------------------------
        print the hide string and number of attemps, input of the char
        ---------------------------------------------------------------*/
        printf("____________________________________\n");
        printf("\n%20s\n",hide);
        printf("____________________________________\n");
        printf("You have %d attemps remaining.\n: ",max_attemps-i);
        fflush(stdin);
        scanf("%s",&input);
       
        /*-------------------------------------------------------------------
        check if the char is in the hide string: if it is then change the
        "*" to the letter, if not then increment 1 the iterator i.
        --------------------------------------------------------------------*/

        if (find_char(word, input, sizeof(word)) == 1)
        {
            for (int i = 0; i < sizeof(word); i++)
            {
                if (word[i] == input) hide[i] = input;
            }
        }
        else
        {
            printf("Wrong letter\n");
            i++;
        }

        /*--------------------------------------------------------------------
        check if you have won or not, if you won then it ends the program.
        ----------------------------------------------------------------------*/

        if (win(hide,sizeof(hide)-1) == 1)
        {
            printf("%s\n",hide);
            printf("\nYOU WIN!\n");
            return 0;
        }
    }

    //-----------------------------------------------------------------------
    //IF YOU EXCEED NUMBER OF ATTEMPS THEN YOU LOST, AND PROGRAM END.

    printf("\nYOU LOST!\n");
    printf("The word was ");
    for (int i = 0; i < 7; i++)
    {
        printf("%c",words[n_word][i]);
    }
    printf("\n");
    
    return 0;
}

//-------------------FUNCTIONS----------------------------

void read_word (void)
{
    FILE *filepointer;
    filepointer = fopen("words.dat","r");
    
    if (filepointer == NULL)
    {
        printf("File could not be opened.\n");
    }
    else
    {
        for (int i = 0; i < 20; i++)
        {
            fscanf(filepointer, "%s", words[i]);
        }
        fclose(filepointer);
    }
}

int select_word (void)
{
    srand(time(NULL));
    int num = rand () % 19;
    return num;
}

int find_char(const char word[], char input, long len)
{
    for (int i = 0; i < len; i++)
    {
        if (word[i] == input)
        {
            return 1;
            break;
        }
    }
    return 0;
}

int win (const char hideword[], long len)
{
    for (int i = 0; i < len; i++)
    {
        if (hideword[i] == '*')
        {
            return 0;
        }
    }
    return 1;
}