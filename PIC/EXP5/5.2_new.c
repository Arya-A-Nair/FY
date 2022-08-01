#include<stdio.h>
//Code by Arya Nair
int main()
{
    int n;
    printf("Number of elements in array: ");
    scanf("%d",&n);
    float values[n];
    printf("Enter your array: ");
    for(int i = 0; i < n; ++i)
    {
        scanf("%f", &values[i]);
    }
    printf("Enter the number you want to search for: ");
    float a;
    scanf("%f",&a);
    printf("Enter the number you want to replace it with: ");
    float b;
    scanf("%f",&b);
    for(int i = 0; i < n; ++i)
    {
        if (a==values[i])
        {
            values[i]=b;
        }
    }
    printf("\n New array is: ");
    for(int i=0;i<n;++i)
    {
        printf("%f ",values[i]);
    }
}
