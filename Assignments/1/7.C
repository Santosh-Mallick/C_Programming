#include<stdio.h>

int main()
{
int num1,num2;

printf("\nSwapping Two Numbers Without Third Variable\n\n");
printf("\nEnter First Number : ");
scanf("%d",&num1);
printf("\nEnter Second Number : ");
scanf("%d",&num2);
num1 = num1 + num2;
num2 = num1 - num2;
num1 = num1 - num2;
printf("\nAfter Swapping:\nFirst Number = %d,\nSecond Number = %d",num1,num2);

return 0;
}
