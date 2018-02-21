#include<stdio.h>
int main()
{
int i,flag,n;
char str[20];
gets(a);
n=strlen(str);
for(i=0;i<=n;i++)
{
if((str[i]>='a')&&(str[i]<='z')||(str[i]>='A')&&(str[i]<='Z'))
{
flag=1;
}
else if((str[i]>='0')&&(str[i]<='9'))
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


