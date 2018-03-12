#include<stdio.h>
int main()
{
char a[10];
int n;
printf("entert the string");
scanf("%s",&a);
n=strlen(a);
if(n%2==0)
{
a[n/2]='*';
a[n/2-1]='*';
}
else
{
a[n/2]='*';
}
printf("string is %s",a);
return 0;
}
