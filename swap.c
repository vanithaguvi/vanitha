#include<stdio.h>
int main(void)
{
int a,b;
printf("enter the 1st no.");
scanf("%d",&a);
printf("enter the second no.");
scanf("%d",&b);
a=a-b;
b=a+b;
a=b-a;
printf("before swapping%d",a);
printf("after swapping%d",b);
}
