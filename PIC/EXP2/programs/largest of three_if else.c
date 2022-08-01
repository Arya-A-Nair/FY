#include<stdio.h>
//Code by Arya Nair
int main()
{
    float num1,num2,num3,max;
    printf("Enter 3 numbers: ");
    //Getting values from the user
    scanf("%f%f%f",&num1,&num2,&num3);


    //conditional operators to find the largest number
    if (num1>num2 && num1>num3)
    {
        max=num1;
    }
    else if(num2>num1 && num2>num3)
    {
        max=num2;
    }
    else
    {
        max=num3;
    }


    printf("%f",max);
}
