#include<stdio.h>

void main()
{
    int start, end;
    int count = 0;
    int old;

    start = 200;
    end = 300;
    old = start;
    while (start <= end)
    {
        if (start % 7 == 0 && start % 5==0)
        {
            count++;
            printf("\n%d - divisible by 7 as well as 5", start);
        }
        else if (start%7==0)
        {
            printf("\n%d - divisible by 7",start);
            count++;

        }
        else if (start% 5 == 0)
        {
            printf("\n%d - divisible by 5",start);
            count++;
        }

        ++start;
    }
    printf("\nNumbers divisible by 5 or 7 and 5 and 7 within 200-300: %d",count);
    return 0;
}
