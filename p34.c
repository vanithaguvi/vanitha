#include<stdio.h>
int main()
{
char a[90];
int i,count=1;
printf("Enter the string");
scanf("%[^\n]s",a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]=='.')
{
count=count+1;
}
}
printf("%d",count);
return 0;
}

