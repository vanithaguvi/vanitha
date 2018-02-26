#include<stdio.h>
int main()
{
int n,res;
printf("enter the number");
scanf("%d",&n);
res=n&(n-1);
if(res==0)
{
printf("nearest power of 2 is",n*2);
}
else
{
printf("no");
}
return 0;
}
