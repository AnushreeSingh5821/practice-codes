// c program to find largest element in an array using recursion//

#include <stdio.h>
#define MAX 100

int lar_elmnt(int arr[]);
int n; 

int main()
{
    int arr[MAX],l,i;
    printf("enter the number of elements to be stored:");
    scanf("%d",&n);

    printf(" Input %d elements in the array :\n",n);
    for(i=0;i<n;i++)
        {
	      printf(" element - %d : ",i);
	      scanf("%d",&arr[i]);
	    }
    l=lar_elmnt(arr);
    printf(" Largest element of the array is: %d\n\n",l);
    return 0;
}

int lar_elmnt(int arr[])
{
    static int i=0,l =-9999;
    if(i < n)
    {
         if(l<arr[i])
           l=arr[i];
      i++;
      lar_elmnt(arr);
    }
    return l;
}


