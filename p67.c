#include<stdio.h>
int main()
{
int n;
printf("Enter the number");
scanf("%d",&n);
n=n+1;
while(n%10!=0)
{
n=n+1;

}
printf("%d",n);
return 0;
}
