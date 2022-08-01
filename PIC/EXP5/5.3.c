#include<stdio.h>
#include<limits.h>

int main()
{
    int n,low=INT_MAX;

    printf("Enter number on elements N: ");
    scanf("%d",&n);

    int values[n];
    printf("Enter your %d values: ",n);
    for (int i=0;i<n;++i)
    {
        scanf("%d",&values[i]);
    }

    //Using my favorite Sort(Bubble Sort)
    for (int i = 0 ; i < n - 1; i++)
    {
        for (int j = 0 ; j < n - i - 1; j++)
        {
            if (values[j] > values[j+1])
            {
            int x       = values[j];
            values[j]   = values[j+1];
            values[j+1] = x;
            }
        }
    }
    printf("Sorted Array: ");
    for (int i=0;i<n;++i)
    {
        printf("%d ",values[i]);
    }

}
