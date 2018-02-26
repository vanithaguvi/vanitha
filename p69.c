#include<stdio.h>
int main()
{
int a,b,diff;
printf("Enter the number");
scanf("%d%d",&a,&b);
diff=a-b;
if(diff%2==0)
{
printf("even");
}
else
{
printf("odd");
}
return 0;
}

