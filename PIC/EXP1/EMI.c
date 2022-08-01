#include <stdio.h>
#include <math.h>

int main()
{
    //intialising variables
    float principal, rate, time, emi;


    //input
    printf("Enter principal: ");
    scanf("%f", &principal);

    printf("Enter rate: ");
    scanf("%f", &rate);

    printf("Enter time in year: ");
    scanf("%f", &time);


    rate = rate / (12 * 100); /*one month interest*/
    time = time * 12; /*To change period from a year to a month*/

    //calculating EMI
    emi = (principal * rate * pow(1 + rate, time)) / (pow(1 + rate, time) - 1);

    printf("EMI = %f", emi);

    return 0;
}
