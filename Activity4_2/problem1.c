/* Write a program that uses the sizeof operator to deter- mine the sizes in bytes of the various data types on your computer system. Write the results to the file "datasize.dat" so you may print the results later. 
* Author: Dexter Gomez*/

#include <stdio.h>

int main (void)
{
    char caracter;
    unsigned char caracter_sin_signo;
    short int entero_corto;
    unsigned short int entero_corto_signoless;
    int entero;
    unsigned int entero_singoless;
    long int entero_largo;
    unsigned long int entero_largo_signoless;
    float flotante;
    double doble;
    long double doble_largo;

    FILE *filepointer;
    filepointer = fopen ("datasize.dat","w");

    if (filepointer == NULL)
    {
        printf ("File cold not be opened.\n");
    }
    else
    {
        fprintf (filepointer, "%s %s\n","Data Type", "Size");
        fprintf (filepointer, "%s %ld\n","char", sizeof(caracter));
        fprintf (filepointer, "%s %ld\n","unsigned char", sizeof(caracter_sin_signo));
        fprintf (filepointer, "%s %ld\n","short int", sizeof(entero_corto));
        fprintf (filepointer, "%s %ld\n","unsigned short int", sizeof(entero_corto_signoless));
        fprintf (filepointer, "%s %ld\n","int", sizeof(entero));
        fprintf (filepointer, "%s %ld\n","unsigned int", sizeof(entero_singoless));
        fprintf (filepointer, "%s %ld\n","long int", sizeof(entero_largo));
        fprintf (filepointer, "%s %ld\n","unsigned long int", sizeof(entero_largo_signoless));
        fprintf (filepointer, "%s %ld\n","float", sizeof(flotante));
        fprintf (filepointer, "%s %ld\n","double", sizeof(doble));
        fprintf (filepointer, "%s %ld\n","long double", sizeof(doble_largo));

        fclose( filepointer );
    }

    return 0;
}