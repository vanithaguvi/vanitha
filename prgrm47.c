#include<stdio.h>
int main()
{ 
int i,j,temp=0,n=3,a[3];
printf("enter the size of an array");
scanf("%d",&n);
for(i=0;i<3;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<3;i++)
{
for(j=i+1;j<3;j++)
{
if(a[i]<a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
printf("max is %d",a[0]);
printf("min is %d",a[2]);
return 0;
}
