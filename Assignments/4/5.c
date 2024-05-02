#include<stdio.h>
int main()
{
    int numbers[10],i,target,found=0;
    printf("Enter 10 Numbers: \n");

    for(i=0; i<10; i++){
        scanf("%d",&numbers[i]);
    }
    printf("Enter The Number You Want To Find : ");
    scanf("%d",&target);

    for(i=0; i<10; i++){
        if(numbers[i] == target){
            printf("%d found at positon %d \n",target,i+1);
            found = 1;
            break;
        }
    }
    if(!found) {
        printf("%d not found in the array. \n",target);
    }
    return 0;
}