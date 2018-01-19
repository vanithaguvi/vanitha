#include<stdio.h>
int main()
{
int i,f=10,l=20;
printf("enter the first interval");
scanf("%d",&f);
printf("enter the second interval");
scanf("%d",&l);
for(i=f;i<=l;i++)
{
if(i%2==0)
{
printf("%d is an even number");
}
}
return 0;
}
