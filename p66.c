#include<stdio.h>
int main()
{
int n,i,count=0;
printf("Enter the number");
scanf("%d",&n);
for(i=2;i<=n/2;i++)
{
if(n%i==0)
{
count=1;
}
}
if(count==0)
{
printf("prime");
}
else
{
printf("non prime");
}
return 0;
}
