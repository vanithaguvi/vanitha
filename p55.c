#include<stdio.h>
int main()
{
int n,m,product;
printf("enter the numbers");
scanf("%d%d",&n,&m);
product=n*m;
if(product%2==0)
{
printf("even");
}
else
{
printf("odd");
}
return 0;
}
