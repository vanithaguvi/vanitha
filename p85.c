#include<stdio.h>
int main()
{
char ch[20];
int i,n;
printf("enter the string");
scanf("%s",&ch[i]);
n=strlen(ch);
for(i=0;i<n;i++)
{
if(i%2==0)
{
printf("%c",ch[i]);
}
}
printf(" ");
for(i=0;i<n;i++)
{
if(i%2!=0)
{
printf("%c",ch[i]);
}
}
return 0;
}
