#include<stdio.h>

//Code by Arya Nair
int main()
{
    int num,maxitem=0,minitem=0;
    float max=0,min=0;
    //Getting the amount of items
    printf("Enter the amount of items: ");
    scanf("%d",&num);
    //For loop for the number of items
    for (int i=0;i<num;i++)
    {
        float price=0,quantity=0;
        int i_num=0;
        //Getting Item number price and quantity from the user
        printf("Enter Item number, Price and Quantity respectively: ");
        scanf("%d %f %f",&i_num,&price,&quantity);
        //Calculating revenue
        float revenue=price*quantity;
        //To initialise the min
        if(min==0){
            min=revenue;
        }
        if (revenue<=min)
        {
            //Assigning new value of min and minitem
            min=revenue;
            minitem=i_num;
        }
        else if (revenue>=max)
        {
            //Assigning new value of max and maxitem
            max=revenue;
            maxitem=i_num;
        }
    }
    //Giving users the maximum revenue and minimum revenue
    printf("Max revenue: Item %d - %f",maxitem,max);
    printf("\nMin revenue: Item %d - %f",minitem,min);
}
