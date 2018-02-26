#include<stdio.h>
int main()
{
int n,m,sum;
printf("enter the two numbers");
scanf("%d%d",&n,&m);
sum=n+m;
if(sum%2==0)
{
printf("sum is even");
}
else
{
printf("sum is odd");
}
return 0;
}
