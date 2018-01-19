#include<stdio.h>
int main()
{
int base,power,result=1;
printf("enter the number",base,power);
scanf("%d%d",&base,&power);
result=pow(base,power);
printf("the answer is %d",result);
return 0;
}
