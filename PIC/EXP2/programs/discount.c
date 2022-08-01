#include<stdio.h>

//Code by Arya Nair
int main()
{
     int price=100, discount;
    //Getting discount percentage from user
     printf("Enter discount value: ");
     scanf("%d",&discount);

     int day=0,i;

     while( i==0)
     {
         //calculating discounted amount
         float discount_amount = (discount*price)/100;
         float dprice = (price-discount_amount);
         if (price<50)
         {
             i=1;
             break;
         }
         else{
            price=dprice;
            day++;
         }

     }
     //Code by Arya Nair
     //giving user the day
     printf("The price will become half on: Day %d",day);
    return 0;
}
