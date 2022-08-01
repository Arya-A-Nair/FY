#include<stdio.h>
#include<limits.h>
//Code by Arya Nair
int main()
{
    int values[10];
    int low=INT_MAX,high=0;
    float sum=0,avg;

    //Taking input from user
    printf("Enter temperature of 10 days: ");

    for(int i = 0; i < 10; ++i)
    {
     scanf("%d", &values[i]);
     sum+=values[i];
    }
    for (int i=0;i<10;++i)
    {
        if(low>=values[i])
        {
            low=values[i];
        }
        if (high<values[i])
        {
            high=values[i];
        }
        //sum=sum+values[i];
    }


    //Giving user the desired answers
    printf("Lowest temperature recorded: %d\n",low);
    printf("Highest temperature recorded: %d\n",high);
    int n=10;
    avg=sum/n;
    printf("Average temperature recorded: %.2f\n",avg);
    /*
    for(int i = 0; i < 10; ++i)
    {
     printf("%d\n", values[i]);
    }
    */
}
