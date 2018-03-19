#include<stdio.h>
int main()
{
int n1,n2,i;
printf("enter the numbers ");
for(i=0;i<3;i++)
{
scanf("%d %d",&n1,&n2);
}
for(i=0;i<3;i++)
{
if(n1>n2)
{
printf("result is %d",n1-n2);
}
else
{
printf("resulit is %d",n2-n1);
}
}
return 0;
}
