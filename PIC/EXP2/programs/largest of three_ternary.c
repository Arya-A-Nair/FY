#include<stdio.h>
//Code by Arya Nair
int main()
{
    float num1,num2,num3,max;
    printf("Enter 3 numbers: ");
    //Getting values from the user
    scanf("%f%f%f",&num1,&num2,&num3);

    //Nested ternary operator
    max = (num1 > num2 && num1 > num3) ? num1 : (num2 > num1 && num2 > num3) ? num2 : num3;

    //Giving user the largest number
    printf("Largest number is: %f",max);
}
