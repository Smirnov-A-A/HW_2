#include <stdio.h>

int main() {
   int a = -2, b = 3;
   printf("a = %d%s %s %d\n", a, ";", "b =", b);
  
   a = a * b;
   b = a / b;
   a = a / b;   

   printf("a = %d%s %s %d\n", a, ";", "b =", b);
   return 0;
}
