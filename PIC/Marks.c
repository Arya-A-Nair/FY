#include <stdio.h>
//Code by Arya Nair
int main() {
   int marks;
   printf("Marks: ");
   scanf("%d", &marks);

    if (marks>75)
    {
        printf("Distinction");
    }
    else if(marks>60 && marks<75)
    {
        printf("First Class");
    }
    else if(marks>50 && marks<=60)
    {
        printf("Second Class");
    }
    else if(marks>=35 && marks<=50)
    {
        printf("Pass");
    }
    else if(marks<35)
    {
        printf("Fail");
    }
   return 0;
}
