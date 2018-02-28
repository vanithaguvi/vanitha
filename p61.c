#include<stdio.h>
int main()
{
char str[20];
int k,i;
printf("Enter the string");
printf("Enter how many characters u want to print");
scanf("%s %d",&str,&k);
for(i=0;i<k;i++)
{
printf("%c",str[i]);
}
return 0;
}
