/*Write a program that implements a function that simulates the roll of a dice with k sides, and use it to simulate the roll of n dices
*Author: Dexter Enrique Gómez Ek*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
  int dices, sides, num, rand_num, sum_sides = 0;

  printf(":");
  scanf("%d %d",&dices,&sides);
  srand(time(NULL));
  for(int i = 0; i < dices; i++)
  {
    printf(":");
    rand_num = rand()%sides+1;
    printf("#%d:  %d\n",i,(rand_num+1));
    sum_sides = sum_sides + rand_num;
  }
  
  printf("total = %d\n",sum_sides);

  return 0;
}