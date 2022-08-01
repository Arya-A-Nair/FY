#include<stdio.h>
int prime(n)
{
    int i;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n,i=0;
    printf("Number: ");
    scanf("%d", &n);
    l: for (i; i < n; i++){
    if (prime(i))
    {
        continue;
    }
    else
    {


        goto p;
    }

    }
    p: printf("%d\n", i);
       goto l;



}
