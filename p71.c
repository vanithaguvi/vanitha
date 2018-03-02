#include<stdio.h>
int main()
{
int i,j,n,k,temp[20];
char str[20];
printf("Enter the string");
scanf("%s",&str);
n=strlen(str);
whilr(i<j)
{
for(i=0;i<n;i++)
{
for(j=n;j>=1;j++)
{
temp[k]=str[i];
str[i]=str[j];
str[j]=temp[k];
}
}
}
printf("Yes");
return 0;
}
