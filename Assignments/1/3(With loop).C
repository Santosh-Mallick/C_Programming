#include<stdio.h>
int main()
{
int a,b,sum;
printf("\nAddition of Two Numbers Without using + Operator\n\n");
printf("\nEnter a Number : ");
scanf("%d",&a);
printf("\nEnter Second Number : ");
scanf("%d",&b);
sum=a-(-b);
printf("\nSum is :  %d",sum);
return 0;
}