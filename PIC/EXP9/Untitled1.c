/*
#include<stdio.h>


int main()
{

    int i,n,roll,ch;
    char name[20];
    struct student
    {
        int roll;
        char name[20];
    }*ptr,*temp;
    printf("Enter the number of students:");
    scanf("%d",&n);
    ptr=(struct student*)malloc(n*sizeof(struct student));
    for(i=0;i<n;i++)
    {
        printf("Enter the roll number:");
        scanf("%d",&ptr[i].roll);
        printf("Enter the name:");
        scanf("%s",ptr[i].name);
    }


    while(ch!=4){
        printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit");
        printf("Enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                printf("Enter the roll number:");
                scanf("%d",&roll);
                printf("Enter the name:");
                scanf("%s",name);
                temp=(struct student*)malloc(n*sizeof(struct student));
                for(i=0;i<n;i++)
                {
                    temp[i].roll=ptr[i].roll;
                    strcpy(temp[i].name,ptr[i].name);
                }
                temp[n].roll=roll;
                strcpy(temp[n].name,name);
                free(ptr);
                ptr=temp;
                n++;
                for(i=0;i<n;i++)
                {
                    printf("%d %s\n",ptr[i].roll,ptr[i].name);
                }
                break;
            case 2:
                printf("Enter the roll number:");
                scanf("%d",&roll);
                temp=(struct student*)malloc(n*sizeof(struct student));
                for(i=0;i<n;i++)
                {
                    if(ptr[i].roll!=roll)
                    {
                        temp[i].roll=ptr[i].roll;
                        strcpy(temp[i].name,ptr[i].name);
                    }
                }
                free(ptr);
                ptr=temp;
                n--;
                for(i=0;i<n;i++)
                {
                    printf("%d %s\n",ptr[i].roll,ptr[i].name);
                }
                break;
            case 3:
                for(i=0;i<n;i++)
                {
                    printf("%d %s\n",ptr[i].roll,ptr[i].name);
                }
                break;
            }
    }

    return 0;

}*/
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{   int choice=0;
    int *pointer;
    char *pointername[7];
  int i=2;
  int fill=0;
  char *temp;
  printf("Please enter the number of students ");
  scanf("%d",&i);
    pointer= (int *) malloc(i*(sizeof(int))) ;
    *pointername= (char **) malloc(i*7*sizeof(char));
    while(choice!=4){
        printf("\nWhat would you like to do:\n1.Insert\n2.Delete\n3.Display\n4.Exit\n\nEnter choice: ");
        scanf("%d", &choice);

    switch( choice)
    {
        case 1:
          temp=(*pointername+fill);
          printf("Enter name: ");
          scanf("%s",&*((temp)));
          printf("roll number\n");
          scanf("%d",&*(pointer+fill));
          fill++;
          break;

        case 2:
          free(pointer);
          fill=0;
          break;
        case 3:
        printf("Displaying.... \n");
        for (int j=0;j<fill;j++){
          printf("%d\n",*(pointer+j));
          printf("%s\n",(*pointername+j));
        }
          //display
          break;
        case 4:
         //exit
         break;


    }
    }
    return 0;
}
*/
/*
#include<stdio.h>


int main()
{

    int i,n,roll,ch;
    char name[20];
    struct student
    {
        int roll;
        char name[20];
    }*ptr,*temp;
    printf("Enter the number of students:");
    scanf("%d",&n);
    ptr=(struct student*)malloc(n*sizeof(struct student));
    for(i=0;i<n;i++)
    {
        printf("Enter the roll number:");
        scanf("%d",&ptr[i].roll);
        printf("Enter the name:");
        scanf("%s",ptr[i].name);
    }
    while(ch!=4){
    printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit");
    printf("Enter your choice:");
    scanf("%d",&ch);


    switch(ch)
    {
        case 1:
            printf("Enter the roll number:");
            scanf("%d",&roll);
            printf("Enter the name:");
            scanf("%s",name);
            temp=(struct student*)malloc(n*sizeof(struct student));
            for(i=0;i<n;i++)
            {
                temp[i].roll=ptr[i].roll;
                strcpy(temp[i].name,ptr[i].name);
            }
            temp[n].roll=roll;
            strcpy(temp[n].name,name);
            free(ptr);
            ptr=temp;
            n++;
            for(i=0;i<n;i++)
            {
                printf("%d %s\n",ptr[i].roll,ptr[i].name);
            }
            break;
        case 2:
            printf("Enter the roll number:");
            scanf("%d",&roll);
            temp=(struct student*)malloc(n*sizeof(struct student));
            for(i=0;i<n;i++)
            {
                if(ptr[i].roll==roll)
                {
                    i++;
                }
                temp[i-1].roll=ptr[i].roll;
                strcpy(temp[i-1].name,ptr[i].name);
            }
            free(ptr);
            ptr=temp;
            n--;
            for(i=0;i<n;i++)
            {
                printf("%d %s\n",ptr[i].roll,ptr[i].name);
            }
            break;
        case 3:
            for(i=0;i<n;i++)
            {
                printf("%d %s\n",ptr[i].roll,ptr[i].name);
            }
            break;
        }
    }

    return 0;

}
*/
/*
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{

    int i,n,roll,ch;
    char name[20];
    struct student
    {
        int roll;
        char name[20];
    }*ptr,*temp;
    printf("Enter the number of students:");
    scanf("%d",&n);
    ptr=(struct student*)malloc(n*sizeof(struct student));
    for(i=0;i<n;i++)
    {
        printf("Enter the roll number:");
        scanf("%d",&ptr[i].roll);
        printf("Enter the name:");
        scanf("%s",ptr[i].name);
    }
    do{
    printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit");
    printf("\n Enter your choice:");
    scanf("%d",&ch);


    switch(ch)
    {
        case 1:
            printf("Enter the roll number:");
            scanf("%d",&roll);
            printf("Enter the name:");
            scanf("%s",name);
            temp=(struct student*)malloc(n*sizeof(struct student));
            for(i=0;i<n;i++)
            {
                temp[i].roll=ptr[i].roll;
                strcpy(temp[i].name,ptr[i].name);
            }
            temp[n].roll=roll;
            strcpy(temp[n].name,name);
            free(ptr);
            ptr=temp;
            n++;
            for(i=0;i<n;i++)
            {
                printf("%d %s\n",ptr[i].roll,ptr[i].name);
            }
            break;
        case 2:
            printf("Enter the roll number:");
            scanf("%d",&roll);
            temp=(struct student*)malloc(n*sizeof(struct student));
            for(i=0;i<n;i++)
            {
                if(ptr[i].roll==roll)
                {
                    i++;
                }
                temp[i-1].roll=ptr[i].roll;
                strcpy(temp[i-1].name,ptr[i].name);
            }
            free(ptr);
            ptr=temp;
            n--;
            for(i=0;i<n;i++)
            {
                printf("%d %s\n",ptr[i].roll,ptr[i].name);
            }
            break;
        case 3:
            for(i=0;i<n;i++)
            {
                printf("%d %s\n",ptr[i].roll,ptr[i].name);
            }
            break;
        }
    }while(ch!=4);

    return 0;

}
*/
/*
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
    printf("Code By Arya Nair\n");
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

}*/
# include<stdio.h>
# include<stdlib.h>
void fun(int *a)
{
  a = (int*)malloc(sizeof(int));
}
int main()
{
  int *p;
  fun(p);
  *p = 6;
  printf("%d\n",*p);
  return(0);
}


