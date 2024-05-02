#include<stdio.h>

 void main()
   {
   int a[3][3],b[3][3],s[3][3],i,j;
   printf("Enter the values of 1st matrix");

   for(i=0;i<3;i++)
      {
      for(j=0;j<3;j++)
         {
            scanf("%d", &a[i][j]);
         }
      }
    printf("Enter the values of 2nd matrix");

    for(i=0;i<3;i++)
       {
       for(j=0;j<3;j++)
          {
            scanf("%d", &b[i][j]);
          }
       }


    for(i=0;i<3;i++)
       {
       for(j=0;j<3;j++)
          {
           s[i][j]=a[i][j]+b[i][j];
          }
       }

    printf("\n The Sum is :\n");

     for(i=0;i<3;i++)
       {
        printf("\n\n");
        for(j=0;j<3;j++)
           {
           printf("\t %d", s[i][j]);
           }
       }
   }