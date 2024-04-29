#include<stdio.h>
int main ()
{
    float numbers[5], sum=0, average;
    printf("Enter 5 numbers : \n");
    for(int i=0; i<5; i++)
    {
        scanf("%f",&numbers[i]);
        sum += numbers[i];
    }
    average = sum/5;
    printf("Sum of the Numbers : %.2f\n",sum);
    printf("Average of the Numbers : %.2f\n",average);

    return 0;
}