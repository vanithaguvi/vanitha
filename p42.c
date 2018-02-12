#include<stdio.h>
int main()
{
char a[20],b[20];
gets(a);
gets(b);
if(strlen(a)>strlen(b))
{
printf("a is greater");
}
else
{
printf("b is greater");
}
return 0;
}
