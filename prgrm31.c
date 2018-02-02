#include<stdio.h>
int main()
{
char a[50];
int i,count=0;
scanf("%s",&a);
for(i=0;a[i]!='\0';i++)
{
count++;
}
printf("no of words %d",count);
return 0;
}
