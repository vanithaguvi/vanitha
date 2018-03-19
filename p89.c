#include<stdio.h>
int main()
{
int i,j,k;
char temp[10],str[10];
printf("enter the string");
scanf("%[^\n]s",str);
for(i=0;str[i]!='\0';i++);
{
for(j=i+1;str[i]!='\0';i++)
{
if(str[i]>str[j])
{
temp[k]=str[i];
str[i]=str[j];
str[j]=temp[k];
}
}
}
printf("%s",str);
return 0;
}
