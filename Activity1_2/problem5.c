/*Write a C program that calculate the value of the Body Mass Index. This program must read the user’s weight in kilograms and height in meters, then calculates and displays the user’s body mass index by using the following formula:
BMI = weightInKilograms / (heightInMeters * heightInMeters)*/

#include <stdio.h>

int main()
{
    float weight, height;
    printf("Introduce the weight (in kg): ");
    scanf("%f",&weight);

    printf("Introduce the height (in mts): ");
    scanf("%f",&height);

    float BMI = weight / (height * height);

    //char message[14];

    if(BMI < 18.5)
    {
        char message[] = "Underweight";
        printf("%f   %s\n",BMI,message);
    }
    if(18.5 <= BMI && BMI < 25)
    {
        char message[] = "Normal";
        printf("%f   %s\n",BMI,message);
    }
    if(25 <= BMI && BMI < 30)
    {
        char message[] = "Overweight";
        printf("%f   %s\n",BMI,message);
    }
    if(BMI > 30)
    {
        char message[] = "Obese";
        printf("%f   %s\n",BMI,message);
    }

    return 0;
}