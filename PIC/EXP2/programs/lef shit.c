#include<stdio.h>

int main()
{
    int num,iter;
    printf("Enter number you would like to left shift: ");
    scanf("%d",&num);
    printf("How many times do you want to shift: ");
    scanf("%d",&iter);

    printf("%d",num<<iter);
    return 0;
}
