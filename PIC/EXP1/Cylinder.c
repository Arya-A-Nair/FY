#include<stdio.h>

int main()
{
    float radius,height;
    float PI=3.141592;

    //getting radius and height
    printf("Enter Radius of cylinder: ");
    scanf("%4f",&radius);
    printf("Enter Height: ");
    scanf("%4f",&height);

    //Calculating area and volume
    float area=2*PI*radius*(radius+height);
    float volume=PI*radius*radius*height;


//printing Area and Volume of cylinder
    printf("Area Of cylinder is: %4f \n",area);
    printf("Volume of cylinder is :%4f",volume);
    return 0;
}
