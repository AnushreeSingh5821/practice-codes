// c program to print array elements using recursion //

#include <stdio.h>
#define MAX 100

void arr_elements(int arr[], int a, int b);

int main()
{
    int arr[MAX];
    int n,i;

    printf("Enter the number of elements of the array:");
    scanf("%d", &n);

    printf("enter %d elements in th array\n");
    for(i=0;i<n;i++)
    {
        printf("elements - %d: ",i);
        scanf("%d",&arr[i]);
    }

    printf(" the elements in the array are: ");
    arr_elements(arr,0,n);
    return 0;
}

void arr_elements(int arr[], int a, int b)
{
    if(a>=b)
    return;

    printf("%d ", arr[a]);

    arr_elements(arr,a+1,b);
}
