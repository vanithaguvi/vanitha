#include<stdio.h>
int main()
{
char a[90]="laptop is good";
int i,count=0;
for(i=0;a[i]!='\0';i++)
{
if(a[i]=='\0')
{
count=count+1;
}
}
printf("space is %d",count);
return 0;
}
