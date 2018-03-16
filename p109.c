#include<stdio.h>
int main()
{
int a[20],i,j,n,temp=0;
printf("Enter the size of an array");
scanf("%d",&n);
printf("enter the integers");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]<a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
printf("min is %d",a[n-1]);
return 0;
}

