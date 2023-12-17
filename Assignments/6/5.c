 #include<stdio.h>
 #include<string.h>
 int main ()
 {
    char str1[120],str2[120];
    int ch,i,j;

    {
        printf("\n Menu");
        printf("\n 1: Find length");
        printf("\n 2: Find reverse of a string");
        printf("\n 3: Concatenate");
        printf("\n 4: Copy string");
        printf("\n 5: Compare String");

        printf("\n Enter Your Choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1 :
            printf("Enter String : ");
            scanf("%s",str1);
            printf("Length of string : %d",strlen(str1));
            break;

            case 2 :
            printf("Enter String : ");
            scanf("%s",str1);
            printf("Reverse : %s",strrev(str1));
            break;

            case 3 :
            printf("\n Enter First String : ");
            scanf("%s",str1);
            printf("\n Enter Second String : ");
            scanf("%s",str2);
            printf("Concatenation : %s",strcat(str1,str2));
            break;
            
            case 4 :
            printf("\n Enter First String : ");
            scanf("%s",str1);
            printf("\n Enter Second String : ");
            scanf("%s",str2);
            printf("we are copying String 1 to String 2 \n");
            printf("String Copied %s",strcpy(str2,str1));
            break;

            case 5 : 
            printf("Enter a String : ");
            scanf("%s",str1);
            printf("Enter second String : ");
            scanf("%s",str2);
            j = strcmp(str1,str2);
            if(j==0)
            {
                printf("Strings are same");
                break;
            }
            else
            {
                printf("Strings are not same");
                break;
            }
            default :
            printf("Invaild");
            break;
        }
    }
    return 0;
 }

//  output :
//  Menu
//  1: Find length
//  2: Find reverse of a string
//  3: Concatenate
//  4: Copy string
//  5: Compare String
//  Enter Your Choice : 5
// Enter a String : hello
// Enter second String : hello
// Strings are same