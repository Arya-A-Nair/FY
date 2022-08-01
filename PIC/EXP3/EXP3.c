#include<stdio.h>

void palcheck()
{
    //function to check palindrome
    char num[16];
    //Getting values from user
    printf("Enter your number: ");
    scanf("%s",&num);

    int i=0,j=strlen(num)-1;
    //do-while loop to iterate through elements of string
    do
    {
        if (num[i++]!=num[j--])//to check is if numbers are not same from the both ends
        {
            printf("Not a palindrome");
            return;
        }

    }while(j>i);
    //Giving user the answer
    printf("%s is a palindrome",num);
    return;
}

void fibonacciSum()//function to check fibonacci sum
{
    //Getting number of terms from user
    printf("Enter the number of terms whose sum you desire: ");
    int n,sum=0,x=0,y=1,z,i=0;
    scanf("%d",&n);
    //loop to find fibonacci numbers and add them to sum
    while(i<n)
      {
            sum=sum+x;
            z=x+y;
            x=y;
            y=z;
            i++;
      }
      //giving user the same
    printf("Sum upto is %d",sum);
}

void divisionSum()
{
    int s=0, i;
    //loop to iterate through values between 100 and 200
    for (i=100;i<200;i++)
    {
        if (i%3==0 && i%5==0)//to check if divisible by 3 and 5
        {
            printf("%d\n",i);
            s=s+i;
        }
    }
    printf("Sum is: %d",s);
}

int main()
{
    char choice;
    //Getting the correct choice from the user
    printf("Choice a:Palindrome Checker\nChoice b:Sum of fibbonaci upto n\nChoice c:To find the numbers and sum of all integer between 100 and 200 which are divisible by both 3 & 5\n\n Enter the appropriate option as per your requirement from the option above:");
    scanf("%s",&choice);
    //switch case for calling the right function for the respective choice of user
    switch(choice)
    {
        case ('a'):
        case ('A'):
            palcheck();
            break;
        case ('b'):
        case ('B'):
            fibonacciSum();
            break;
        case ('c'):
        case ('C'):
            divisionSum();
            break;
        default:
            printf("Incorrect input");
            break;
    }



}
