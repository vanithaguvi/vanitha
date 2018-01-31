#include<stdio.h>
void main()
{
int n,i,j,temp,a[20];
printf("Enter the size of an array");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter the integers");
scanf("%d",&a[i]);
}
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
getch();
}
