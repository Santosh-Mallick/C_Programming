#include<stdio.h>

int main()
{
int intType;
float floatType;
double doubleType;
char charType;

printf("\nProgram To Size Of Variables\n\n");
printf("Size of Integer : %dbytes\n",sizeof(intType));
printf("Size of Float : %dbytes\n",sizeof(floatType));
printf("Size of Double : %dbytes\n",sizeof(doubleType));
printf("Size of Character : %dbytes\n",sizeof(charType));

return 0;
}