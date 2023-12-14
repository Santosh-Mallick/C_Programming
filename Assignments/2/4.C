#include<stdio.h>

int main()
{
int n,res  = 1;

printf("\nFind Factorial\n");
printf("\nEnter a number : ");
scanf("%d",&n);

for(int i=n;i>=1;i--)
{
res = res*i;
}
printf("\nThe Factorial of %d is %d",n,res);

return 0;
}