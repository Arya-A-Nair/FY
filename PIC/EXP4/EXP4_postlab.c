#include <stdio.h>

int main()
{
    int row = 10;
    for(int i = 1; i <= row; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            printf("%d ", i * j);
        }
        printf("\n");
    }

    return 0;
}

