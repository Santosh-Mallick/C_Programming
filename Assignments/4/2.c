#include<stdio.h>
int main()
{
    int numbers[10], i, evensum=0, oddsum=0;
    printf("Enter a Number :\n");
    for(i=0; i<10; i++)
    {
        scanf("%d",&numbers[i]);
    }
    printf("Even Number : ");
    for(i=0; i<10; i++) {
        if(numbers[i]%2==0)
        {
            printf("%d, ",numbers[i]);
            evensum += numbers[i];
        }
        }
    printf("\n Odd Numbers : ");
    for(i=0; i<10; i++) {
        if(numbers[i]%2!=0)
        {
            printf("%d, ",numbers[i]);
            oddsum += numbers[i];
        }
        }
        printf("\n Sum Of Even Numbers : %d\n",evensum);
        printf("\n sum of Odd Numbers : %d\n",oddsum);

        return 0;
}
