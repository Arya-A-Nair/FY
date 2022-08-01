#include<stdio.h>
//Code by arya Nair
int main()
{
  int n,alph='A',num=1;

  printf("Enter number of rows: ");
  scanf("%d",&n);


  for (int i=0;i<=n;i++)
  {
    for(int j=i; j<=n; j++)
     {
       //printf("a");

       printf(" ");
     }
    for (int k=0;k<i;k++)
    {
        if (i%2==1)
        {
            printf("%d ",num);
            num++;
        }
        else{
            printf("%c ",alph);
            alph++;
        }
    }
    for (int j=0;j<2*i-2;j++)
    {
        printf(" ");
    }
    printf("\n");
  }
  return 0;
}


