#include <stdio.h>
	
	int main(void) {
		int n,d,b,c;
		scanf("%d\n",&n);
		scanf("%d %d %d",&d,&b,&c);
		if(d>b&&d>c)
		{
			printf("%d",d);
		}
		else if(b>d&&b>c)
		   {
			printf("%d",b);
		   }
	           
	           	else
		{
			printf("%d",c);
		}
		return 0;
	}
