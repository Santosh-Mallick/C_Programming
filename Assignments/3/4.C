#include<stdio.h>

int main()
{
    int n,res=1;
    printf("Enter a Number : ");
    scanf("%d",&n);

    for (int i = n; i>=1; i--)
    {
        res = res*i;
    }
    printf("\n The Factorial of %d is %d",n,res);
    return 0;
}


// Output
// Enter a Number : 5

//  The Factorial of 5 is 120