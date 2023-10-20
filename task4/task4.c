#include <stdio.h>

int main() {
   int k = 4200;
   int h, m;
  
   h = k / 3600;
   m = k % 3600 / 60;
  
   printf("%d%s%d\n", h, ":" ,m);
   return 0;
}
