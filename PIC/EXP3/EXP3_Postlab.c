#include<stdio.h>
#include<limits.h>

int main()
{
    int opt;
    int values[5];
    printf("Enter 5 numbers: ");
    for(int i = 0; i < 5; ++i) {
     scanf("%d", &values[i]);
    }

    printf("1. Display the smallest number entered\n2. Display the largest number entered\n3. Display the sum of the five numbers entered\n4. Display the average of the five numbers entered.\n5. Exit\n");
    printf("Enter the option you chose(1/2/3/4/5): ");
    scanf("%d",&opt);
    switch (opt)
    {
    case 1:
        {
            int min=INT_MAX;
            for(int i=0;i<5;i++)
            {
                if(min>values[i])
                {
                    min=values[i];
                }
            }
            printf("%d",min);
            break;
        }
    case 2:
        {
            int max=0;
            for(int i=0;i<5;i++)
            {
                if(max<values[i])
                {
                    max=values[i];
                }
            }
            printf("%d",max);
            break;
        }
    case 3:
        {
            float sum=0;
            for(int i=0;i<5;i++)
            {

                sum+=values[i];

            }
            printf("%f",sum);
            break;
        }
    case 4:
        {
            int sum=0;
            for(int i=0;i<5;i++)
            {

                sum+=values[i];

            }
            float avg=sum/5;
            printf("%f",avg);
            break;
        }
    case 5:
        return 0;


    }
    return 0;
}
