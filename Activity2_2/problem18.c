#include <stdio.h>

int main() {
   int i, space, rows, counter = 0;

   printf("Write the number of rows:\n");
   scanf("%d", &rows);

   for (i = 1; i <= rows; ++i, counter = 0) {
      for (space = 1; space <= rows - i; ++space) {
         printf(" ");
      }
      while (counter != 2 * i - 1) {
         printf("+");
         ++counter;
      }
      printf("\n");
   }
   return 0;
}
