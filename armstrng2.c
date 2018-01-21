#include<stdio.h>
	int main()
	{
	int c,d,i,temp,num,rem;
	printf("enter the numbers: ");
	scanf("%d%d",&c,&d);
	printf("armstrong no between %d and %d are:",c,d);
	for(i=c+1;i<d;++i)
	{
	temp=i;
	num=0;
	while(temp!=0)
	{
	rem=(temp%10);
	num+=rem*rem*rem;
	temp/=10;
	}
	if(i==num)
	{
	printf("%d",i);
	}
	}
	return 0;
	}

	
