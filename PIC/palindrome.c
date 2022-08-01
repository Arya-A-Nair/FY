#include <stdio.h>
//Code by Arya Nair
int main()
{
   int n, t, sum = 0, remainder;

   printf("Enter Number: \n");
   scanf("%d", &t);



   while (t != 0)
   {
      remainder = t % 10;
      sum       = sum + remainder;
      t         = t / 10;
   }

   printf("Sum of digits: %d\n",sum);

   return 0;
}
