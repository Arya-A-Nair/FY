#include <stdio.h>

int main() {
    int num,sum = 0;
    float avg;

    printf("Number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; ++i) {
        for (int j=0;j<i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }


    return 0;
}
