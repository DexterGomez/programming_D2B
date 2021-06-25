/*The program should generate an n amount of random points. In each iteration, determine if the point generated lies inside the circle or not. At the end, based on the number of points that were inside the circle, print an approximation for based on the equation above.
*Author: Dexter ENrique Gómez EK*/

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void)
{
   int iterations, count = 0;
   double x,y,pi;

   printf(":");
   scanf("%d",&iterations);

   srand(time(NULL));

   for(int i = 0; i < iterations; i++)
   {
      x = (double)rand()/RAND_MAX;

      y = (double)rand()/RAND_MAX;
     
      if((x*x + y*y) <= 1)
      {
         count++;
      }
   }

   pi = 4 * (double)count / iterations;
   
   printf("= %f\n",pi);

   return 0;
}

