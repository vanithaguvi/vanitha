#include<stdio.h>
int main()
{
char ch[90]="#$kfhj2145";
int i,count;
for(i=0;ch[i]!='\0';i++)
{
if((ch=='.')||(ch=='$')||(ch=='*')||(ch='^'))
{
count=count+1;
}
}
printf("%d",count);
return 0;
}
