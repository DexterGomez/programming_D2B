/*Write a program that calculates the value of 𝜋 from the series. The program should input the number of terms to be added.
*Author: Dexter Enrique Gómez Ek*/

#include <stdio.h>

int main(void)
{
    int n_terms;
    printf(":");
    scanf("%d",&n_terms);
    
    double pi = 0;
    double denominator = 1;

    for(int i = 0; i < n_terms; i++)
    {
        //------numerator--------
        double numerator = 1;
        if (i != 0)
        {
            for(int exponent = 0; exponent < i; exponent++)
            {
                numerator = numerator * (-1);
            }
            
        }
        //-----------------------
        numerator = numerator * 4;
        pi = pi + (numerator/denominator);
        denominator = denominator + 2;
    }

    printf("%f\n",pi);

    return 0;
}