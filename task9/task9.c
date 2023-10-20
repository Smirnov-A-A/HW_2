#include <stdio.h>

int main() {
   unsigned int a = 10;	//0000 1010
   int b = 0;
   
   printf("a = %d\n", a);

   b = a << 2;		//0010 1000 = 40
   printf("Сдвиг влево на 2 бита, a = %d\n", b);

   b = a >> 2;		//0000 0010 = 2
   printf("Сдвиг вправо на 2 бита, a = %d\n", b);

   return 0;
} 
