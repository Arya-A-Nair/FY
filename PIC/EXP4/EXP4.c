#include<stdio.h>
//Code by Arya Nair
int main()
{
    int rows;
    printf("Enter Rows: ");
    scanf("%d",&rows);
    for(int i = rows; i >= 1; i--){
        for(int j = 1; j < i; j++)
        {
            printf("  ");
        }
        for(int j =i; j <= rows; j++)
        {
            printf("%d ", j);
        }
        printf("\n");

    }
}
