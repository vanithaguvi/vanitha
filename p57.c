#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,temp=0;
printf("Enter the two numbers");
scanf("%d%d",&a,&b);
temp=a;
a=b;
b=temp;
printf("After swapping %d %d",a,b);
return 0;
}

