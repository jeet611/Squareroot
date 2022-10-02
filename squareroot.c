#include <math.h>
#include <stdio.h>

int main() {
   double number;

   printf("Enter a number: ");
   scanf("%lf", &number);

   // computing the square root
   number = sqrt(number);

   printf("Square root of %.2lf =  %.2lf", number);

   return 0;
}
