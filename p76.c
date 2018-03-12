#include<stdio.h>
int main()
{
int n,i,flag;
printf("enter the number");
scanf("%d",&n);
for(i=2;i<=n/2;i++)
{
if(n%i==0)
{
flag=0;
break;
}
}
if(flag==0)
{
printf(" noncomposite");
}
else
{
printf("composite");
}
return 0;
}
