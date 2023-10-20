#include <stdio.h>

int main() {
   int res;
   int a = 15, b = 5, c = 6, 
       d = 3,  e = 4, f = 2, h = 3;
   
   res = a / (b * c / (d * e / (f * h)));
   printf("res = %d\n", res);
   return 0;
} 
