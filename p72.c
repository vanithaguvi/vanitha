#include<stdio.h>
int main()
{
int i,flag=0;
char a[20];
printf("enter the string");
scanf("%s",&a);
while(a[i]!='\0')
{
if((a[i]=='a')||(a[i]=='e')||(a[i]=='i')||(a[i]=='o')||(a[i]=='u')||(a[i]='A')||(a[i]=='E')||(a[i]=='I')||(a[i]=='O')||(a[i]=='U'))

flag=1;
i++;

}
if(flag==0)
{
printf("yes");
}
else
{
printf("no");
}
return 0;
}
