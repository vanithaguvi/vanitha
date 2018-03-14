#include<stdio.h>
int main()
{
int a,b;
printf("enter the numbers:");
scanf("%d %d",&a,&b);
if(a==0)
{
printf("%d",b);
}
else
{
while((a!=0)&&(b!=0))
{
if(a>b)
a=a-b;
else
b=b-a;
}
printf("%d",a);
}
return 0;
}

