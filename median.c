#include<stdio.h>
int main()
{
int i,j,a[20],temp,mid;
printf("Enter the size of an array");
scanf("%d",&n);
printf("Enter the integers");
for(i=0;i<n;i++)
{

scanf("%d",&a[i]);
}
if(a[i]<a[j])
{
for(j=i+1;j<n;j++)
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
mid=n/2;
printf("median is %d",a[mid]);
return 0;
}
