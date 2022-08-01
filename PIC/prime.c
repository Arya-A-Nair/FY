#include<stdio.h>
void main(){
int low, high, i, flag;

   low=100;
   high=300;

   while (low < high) {
      flag = 0;

      if (low <= 1) {
         ++low;
         continue;
      }

      for (i = 2; i <= low / 2; ++i) {

         if (low % i == 0) {
            flag = 1;
            break;
         }
      }

      if (flag == 0)
         printf("%d ", low);

      ++low;
   }

   return 0;
}
