#include<stdio.h>
int main()
{
int i,flag=0;
char ch[20];
printf("enter the string");
scanf("%s",&ch[i]);
for(i=0;ch[i]!='\0';i++)
{
if(ch[i]==ch[i+1])
{
flag=1;
break;
}
}
if(flag==1)
{
printf("yes");
}
else
{
printf("no");
}
return 0;
}
