#include<stdio.h>
int main()
{
int a,b;
printf("Enter the numbers");
scanf("%d%d",&a,&b);
a=a^b;
b=a^b;
a=a^b;
printf("after swapping%d %d",a,b);
return 0;
}
