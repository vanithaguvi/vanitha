#include<stdio.h>
int main()
{
char a[70],i,count=0;
printf("Enter the string");
scanf("%[^\n]s",a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]!='\0')
{
count=count+1;
}
}
for(i=0;a[i]!='\0';i++)
{
if(a[i]=='\0')
{
count=count-1;
}
}
printf("%d",count);
return 0;
}
