#include<stdio.h>
float main()
{
float a,b,h,c;
printf("key is the first value");
scanf("%f", &a);
printf("key is the second value");
scanf("%f", &b);
printf("key is the third value");
scanf("%f", &h);
c=1./2.*(a+b)*h;
printf("the input values of a,b and h %.2f %.2f %.2f\n",a,b,h);
printf("the area of trapezium is c=%.2f\n",a);
}
