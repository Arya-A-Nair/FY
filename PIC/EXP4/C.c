#include<stdio.h>
//Code by Arya Nair
int main()
{
    int num,flag=1;
    printf("Number:");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        flag=i%2;
        for (int j=0;j<i;j++)
        {

            printf("%d ",flag);
            if (flag==0)
            {
                flag=1;
            }
            else{
                flag=0;
            }
        }
        printf("\n");

    }
    return 0;
}
