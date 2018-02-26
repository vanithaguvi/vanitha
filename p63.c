#include<stdio.h>
int main()
{
int i,count=1;
char a[20];
printf("Enter the string");
scanf("%[^\n]s,a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]==' ')
{
count=count+1;
}
}

printf("number of words is%d",count);

return 0;
}
