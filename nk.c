#include <stdio.h>

int main(void)
{
int a[100],p,i,j,n,s=0;
printf("\n enter the no. of element in array");
scanf("%d",&n);
printf("\n enter the values");
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
printf("\n enter the no. of elements to be added");
scanf("%d",&p);
for(j=0;j<p;j++)
{
	s=s+a[j];
}
printf("\n the sum value is %d",s);
	return 0;
}
