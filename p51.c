#include<stdio.h>
int main()
{
printf("enter the number");
scanf("%d",&n);
int r,n,sum=0,re;
while(n!=0)
{
r=n%10;
sum=(sum*10)+r;
n=n/10;
}
while(sum!=0)
{
re=sum%10;
printf("%d\t",re);
sum=sum/10;
}
return 0;
}

