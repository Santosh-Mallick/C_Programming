#include<stdio.h>

int main()
{
int n,i,c=0;

printf("Enter a Integer : ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
  if(n%i==0)
   {
    c++;
   }
}
if(c==2)
{
printf("%d is a Prime Number",n);
}
else
{
printf("%d is not Prime Number",n);
}

return 0;
}