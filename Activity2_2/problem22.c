/*Write a program that computes the perimeter of a polygon. It should read pairs of x and y values until the user enters a blank like for x. Afterwards, it should print the total perimeter
*Author: Dexter Enriqeu Gómez Ek*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    float x = 0,y = 0,aux_x = 1,aux_y = 1;
    float perimeter = 0;

    printf("Introduce the same x,y twice to stop the input:\n");

    while(aux_y != y && aux_x != x)
    {
        aux_x = x; aux_y = y;
        scanf("%f %f",&x,&y);

        //This operation obtain the line between two x,y points
        perimeter = perimeter + sqrt( ((x-aux_x)*(x-aux_x)) + ((y-aux_y)*(y-aux_y)));
    }

    printf(":%f\n",perimeter);

    return 0;
}