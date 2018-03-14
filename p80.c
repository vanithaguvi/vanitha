#include<stdio.h>
int main()
{
char ch[19];
int i,k;
printf("enter the term ");
scanf("%s",ch);
for(k=0;ch[k]!='\0';k++)
{
}
for(i=0;i<k;i++)
{
if((ch[i]%2)!=0)
printf("%c",ch[i]);
}
return 0;
}
