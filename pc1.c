// c program to print first 50 natural numbers using recursion//
#include <stdio.h>
int natural_num(int);
int main()
{
    int n=1;
    printf("\nfirst 50 natural numbers are:\n");
    natural_num(n);
    return 0;
}

int natural_num(int n)
{
    if(n<=50)
    {
        printf("\n%d",n);
        natural_num(n+1);
    }
}