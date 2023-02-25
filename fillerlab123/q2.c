#include <stdio.h>
int fibonacci(int n)
{
	if (n==1)
		return 0;
	else if (n==2)
		return 1;
	else
		return fibonacci(n-1)+ fibonacci(n-2);
}
int main()
{
	int n;
	printf("enter which fibonacci number you want to compute\n");
	scanf("%d",&n);
	printf("nth fibonacci is %d\n",fibonacci(n));
	
}
