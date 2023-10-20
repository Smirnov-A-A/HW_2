#include <stdio.h>

int main() {
   int n = 1200, m = 70;
   printf("n = %d, m = %d, n/m = %d\n", n, m, n/m);
 
   printf("Младший разряд - %d\n", n / m % 10);
   
   return 0;
}
