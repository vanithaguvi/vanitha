#include<stdio.h>
int main()
{
int i,flag,n;
char a[20];
gets(a);
n=strlen(a);
for(i=0;i<=n;i++)
{
if((a[i]>='a')&&(a[i]<='z')||(a[i]>='A')&&(a[i]<='Z'))
{
flag=1;
}
else if((a[i]>='0')&&(a[i]<='9'))
{
flag=2;
}
else
{
flag=3;
}
if(flag=1&&flag=2)
{
printf("yes"):
}
else
{
printf("no");
}
return 0;
}


