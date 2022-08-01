#include<stdio.h>
//Code By Arya Nair
float sort(float arr[], int n)// Parameters- float data type array and int n
{
    float temp;
    for (int i = 0; i < n; ++i)
    {

            for (int j = i + 1; j < n; ++j)
            {

                if (arr[i] > arr[j])
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
    int n,i,j,temp;
    //Asking user to enter number of elements
    printf("How many elements are there: ");
    scanf("%d",&n);
    //Asking user to enter the elements
    printf("Enter %d elements: ",n);
    //Declaring an array with size+1 to accomodate the new element later
    float arr[n+1];
    for ( i=0;i<n;++i)
    {
        scanf("%f",&arr[i]);
    }
    //sorting the array
    sort(arr,n);
    //Showing user the sorted array
    printf("Sorted Array: ");
    for (int i=0;i<n;++i)
    {
        printf("%f ",arr[i]);
    }

    // Asking user for another element which he/she/they want to add
    printf("\nEnter the element you want to insert: ");
    scanf("%f",&arr[n]);

    //Sorting the new array
    sort(arr,n+1);

    //Displaying the Array to the user
    for (int i=0;i<=n;++i)
    {
        printf("%f ",arr[i]);
    }
}
