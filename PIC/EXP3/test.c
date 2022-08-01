#include<stdio.h>
#include<limits.h>

int main()
{
    int values[]={9,4,6,7,8};
    int min=INT_MAX;
            for(int i=0;i<5;i++)
            {
                if(values[i]<min)
                {
                    min=values[i];
                }
            }

            printf("%d",min);
            return 0;
}
