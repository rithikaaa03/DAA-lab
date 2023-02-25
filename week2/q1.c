#include <stdio.h>
#include <stdlib.h>
int gcd(int a,int b)
{
	int t=a>b?a:b;
	int opcount=0;
	while(t>0)
	{
		opcount++;
		if(a%t==0 && b%t==0)
		{
			printf("count is %d\n",opcount);
			return t;
			
		}
		else
			t--;
	}
	
}
int main()
{
	printf("enter the 2 numbers to calculate gcd:");
	int a,b;
	scanf("%d %d",&a,&b);
	printf("gcd is %d\n",gcd(a,b));
	
	
}