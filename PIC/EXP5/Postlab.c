#include<stdio.h>
//Code by Arya Nair
float sort(float arr[], int n)// Parameters- float data type array and int n
{
    float temp;
    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            if (arr[i] < arr[j])
            {
                temp=  arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

    }

}


int main()
{
    int n;
    //Asking user to enter number of elements
    printf("How many elements are there: ");
    scanf("%d",&n);
    //Asking user to enter the elements
    printf("Enter %d elements: ",n);
    float arr[n];
    for ( int i=0;i<n;++i)
    {
        scanf("%f",&arr[i]);
    }
    //sorting the array in reverse order
    sort(arr,n);
    //DIsplaying the reverse sorted array
    for (int i=0;i<n;++i)
    {
        printf("%f ",arr[i]);
    }
}
