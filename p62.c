#include<stdio.h>
#include<string.h>
int main()
{
char a[20];
int i,m,flag;
printf("Enter the string");
scanf("%s",&a);
m=strlen(a);
for(i=0;i<m;i++)
{
if((a[i]=='0')||(a[i]=='1'))
{
flag=0;
}
else
{
flag=1;
}
}
if(flag==1)
{
printf("no");
}
else
{
printf("yes");
}
return 0;
}
