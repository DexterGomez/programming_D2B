/* Write a function that takes a string as a parameter and returns True if the string is a palindrome, False otherwise.
 * Author: Dexter Gomez */

#include <stdio.h>
#include <string.h>

/*return True if the string is palindromic*/
void is_palindromic (char const *string);

int main (void)
{
    char string[40];

    printf ("Insert a string: ");
    fflush (stdin);
    fgets (string,40,stdin);
    string[strlen(string) - 1] = '\0';

    is_palindromic (string);

    return 0;
}

void is_palindromic (char const *string)
{   
    int key = 0;
    int start_p = 0;
    int end_p = strlen(string) - 1;

    while (string[start_p] == string[end_p])
    {
        if(start_p == end_p) 
        {
            printf("True\n");
            key = 1;
            break;
        }
    
        start_p++;
        end_p--;
    }
    if(key == 0) printf("False\n");
}
