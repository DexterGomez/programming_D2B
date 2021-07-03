/*Write a program that inputs one five-digit number, separates the number into its individual digits and prints the digits separated from one another by three spaces each. Hint: Use combinations of integer division and the remainder operation.*/

#include <stdio.h>

int main()
{
    int num, d1, d2, d3, d4, d5;

    //Input
    printf("Insert a five-digit number: ");
    scanf("%d",&num);

    d1 = num / 10000;
    num = num - d1*10000;
    d2 = num / 1000;
    num = num - d2 *1000;
    d3 = num / 100;
    num = num - d3*100;
    d4 = num / 10;
    num = num - d4 *10;
    d5 = num / 1;
    
    //Output
    printf("%d   %d   %d   %d   %d\n",d1,d2,d3,d4,d5);

    return 0;
}
