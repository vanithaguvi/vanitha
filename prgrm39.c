#include<stdio.h>
int main()
{
int i,j,temp,a[10];
printf("Enter the num");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<10;i++)
{
for(j=i+1;j<10;j++)
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
return 0;
}
