#include<stdio.h>
//Code by Arya Nair
int main()
{
    int values[2];
    printf("Enter Two numbers: ");
    for (int i=0;i<2;++i)
    {
        scanf("%d",&values[i]);
    }
    values[0]=values[0]+values[1];
    values[1]=values[0]-values[1];
    values[0]=values[0]-values[1];

    printf("Swapped integers are: ");
    for (int i=0;i<2;++i)
    {
        printf("%d ",values[i]);
    }
}
