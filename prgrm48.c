#include<stdio.h>
int main()
{
int sum=0,n,i;
printf("enter how many numbers");
scanf("%d",&n);
for(i=0;i<n;i++)
{
sum=sum+i;
}
printf("avg is%d",sum/n);
return 0;
}
