#include <stdio.h>

int main() {
   int k = 172799;
   int h1, h2, m1, m2, s1, s2;
   
   h1 = k % 86400 / 36000;		//десятки часов
   h2 = k % 86400 % 36000 / 3600;	//единицы часов
   m1 = k % 3600 / 600;			//десятки минут
   m2 = k % 600 / 60;			//единицы минут
   s1 = k % 60 / 10;			//десятки секунд
   s2 = k % 60 % 10;			//единицы секунд
      
   printf("%d%d%s%d%d%s%d%d\n", h1, h2, ":", m1, m2, ":", s1, s2);
   return 0;
}
