#include <stdio.h>
#include <math.h>

int main() {
  int n = 0;
  int dec_number = 0;
  char bin_number[] = "111";

   //количество разрядов в двоичном числе
   while (bin_number[n] != '\0') {
       ++n;
   }
  
   //перевод двоичного числа в десятичное
   for (int i = 0, k = n - 1; i < n; ++i, --k) {
      if (bin_number[i] = '1') {
         dec_number += pow(2, k);
      }
   }
   
   printf("%s %s %d\n", bin_number, "=", dec_number);
   return 0;
}
