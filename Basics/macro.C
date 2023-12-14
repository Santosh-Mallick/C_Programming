#include<stdio.h>

#define PI 3.14
#define circleVolume(r) ((4.f/3) * PI * (r*r*r))
int main()
{
int r1 = 5,r2 = 10,r3 = 15;


double v1 = circleVolume(r1);
double v2 = circleVolume(r2);
double v3 = circleVolume(r3);

printf("Volume of circle with %dr is %.3lfm\n",r1,v1);
printf("Volume of circle with %dr is %.3lfm\n",r2,v2);
printf("Volume of circle with %dr is %.3lfm\n",r3,v3);

return 0;
}