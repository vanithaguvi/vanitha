#include<stdio.h>
int main(void)
{
int a,b;
printf("enter 1st no.");
scanf("%d",&a);
printf("enter 2nd no.");
scanf("%d",&b);
a=a^b;
b=a^b;
a=b^a;
printf("before swapping%d",a);
printf("after swapping%d",b);
}
