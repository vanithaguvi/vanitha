#include<stdio.h>
int main()
{
int i,count=0;
char sr[20];
scanf("%s",&sr);
for(i=0;sr[i]!=0;i++)
{
if(sr[i]==' ')
{
count++;
}
printf("%d",count+1);
return 0;
}
