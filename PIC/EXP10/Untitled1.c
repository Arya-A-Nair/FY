#include<stdio.h>

int main()
{
    int x1=0,x2=0,x3=0; //Initialising zero for position '/'
    printf("Number of Marbles you want to put: ");
    int n;
    scanf("%d",&n);
    char inp;
    for (int i=0;i<n;i++)//Running a for loop for each marble
    {
        printf("Marble in A or B: ");
        scanf(" %c",&inp);
        if (inp=='A')
        {
            if(x1==0){//if lever is bent towards right it will directly go into C
                printf("Marble fell in: C\n");
                x1=1;//changing lever position
            }
            else if(x1==1){
                x1=0;//changing lever position
                if(x2==0){//if lever is bent left it will go into C
                    printf("Marble fell in: C\n");
                    x2=1;//changing lever position
                }
                else if(x2==1){//if lever is bent right it will go into D
                    printf("Marble fell in: D\n");
                    x2=0;//changing lever position
                }
            }
        }
        else if (inp=='B')
        {
            if(x3==1){//if is bent towards right it will directly go into D
                printf("Marble fell in: D\n");
                x3=0;//changing lever position
            }
            else if(x3==0){
                x3=1;//changing lever position
                if(x2==0){//if lever is bent left it will go into C
                    printf("Marble fell in: C\n");
                    x2=1;//changing lever position
                }
                else if(x2==1){//if lever is bent left it will go into D
                    printf("Marble fell in: D\n");
                    x2=0;//changing lever position
                }
            }
        }
    }
}
