#include<stdio.h>

#include<math.h>
int main ()
{
int num,og,rem,n=0;
float result = 0.0;


printf("Enter a Integer : ");
scanf("%d",&num);
og = num;

for(og=num; og!=0; ++n) {
og /= 10;
}
for(og=num; og!=0; og /= 10) {
rem = og % 10;
result += pow(rem,n);
}
if((int)result == num)
  printf("%d is an Armstrong Number.",num);
  else
  printf("%d is not an Armstrong Number.",num);


return 0;
}