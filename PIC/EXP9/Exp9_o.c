#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int n=0,j,i;

void printing(int *a[],char *b[])
{
    printf("\n");
    for( i=0;i<n;i++)
    {
        printf("%d: %s\n",*a[i],b[i]);
    }
    printf("\n");
}

void inserting(int *a[],char *b[])
{
    int temp=0;
    printf("Number of players you want to Insert: ");
    scanf("%d",&temp);

    for( j=0;j<temp;j++,n++)
    {

        a[n]=(int *)malloc(sizeof(int));
        b[n]=(char *)malloc(sizeof(char));
        printf("Enter Roll number: ");
        scanf("%d",a[n]);
        printf("Enter Name: ");
        scanf("%s",b[n]);
    }
    printing(a,b);

}
void deleting(int *a[],char *b[])
{
    char name[40];
    printf("Enter the name of the player you want to delete: ");
    scanf("%s",name);
    int pos=0;
    for( i=0;i<n;i++)
    {
        if(strcmp(b[i],name)==0)
        {
            pos=i;
            free(a[pos]);
            free(b[pos]);
            break;
        }
    }
    n--;
    for( j=pos;j<n;j++)
    {
        a[j]=a[j+1];
        b[j]=b[j+1];
    }
    printing(a,b);
}


int main()
{
    int x=0;

    int *a[50];
    char *b[50];
    while(x!=4)
    {
        printf("Options-\n");
        printf("1. Inserting\n");
        printf("2. Deleting\n");
        printf("3. Printing\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&x);

        switch(x)
        {
            case 1: inserting(a,b);
                    break;
            case 2: deleting(a,b);
                    break;
            case 3: printing(a,b);
                    break;
            case 4: printf("Exit\n");
                    break;
            default: printf("Incorrect input\n");
                     x=4;

        }
    }

}
