#include <stdio.h>

int main()
{
    int m,n,a=0,sum=0;       
    printf("Enter the number of rows and column\n");
    scanf("%d %d",&m,&n);    
    int arr[m][n];   //Matrix Declaration
    printf("Enter the elements of the matrix\n");
    for(int i=0;i<m;i++)     
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nElements in the matrix are \n");
    for(int i=0;i<m;i++)     
   {
        for(int j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    if(m == n) {
        for (int i = 0; i < m; ++i) { 
			
			// calculating the main diagonal sum 
			sum = sum + arr[i][i]; 
			
			// calculating the off diagonal sum 
			a = a + arr[i][m - i - 1]; 
		} 
		
		printf("\nMain diagonal elements sum is = %d\n", sum); 
		printf("Off-diagonal elements sum is = %d\n", a);
    }
    return 0;
}