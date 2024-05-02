#include<stdio.h>
int main()
{
    int mat[3][3],x,y;
    for(x=0; x<3; x++)
    {
        for(y=0; y<3; y++)
        {
            printf("\n Enter matrix element a[%d][%d] : ",x,y);
            scanf("%d",&mat[x][y]);
        }
    }
    printf("\nIn Matrix Format\n");
    for(x=0; x<3; x++)
    {
        for(y=0; y<3; y++)
        {
            printf("%d",mat[x][y]);
        }
        printf("\n");
    }    
    return 0;
}