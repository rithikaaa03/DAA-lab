#include <stdio.h>
#include <stdlib.h>

int main()
{
	int u,v,n;
	printf("enter the number of vertices\n");
	scanf("%d",&n);
	int matrix[10][10];
	for (u=0;u<n;u++)
	{
		for(v=0;v<n;v++)
		{
			matrix[u][v]=0;
		}
	}
	for(u=0;u<n;u++)
	{
		for(v=0;v<n;v++)
		{
			printf("is there an edge between %d and %d. type y if yes and n if no\n",u,v);
			char op,temp;
			scanf("%c",&temp);
			scanf("%c",&op);
			if (op=='y')
				matrix[u][v]=1;
		}
	}
	for(u=0;u<n;u++)
	{
		for(v=0;v<n;v++)
		{
			printf("%d",matrix[u][v]);
		}
		printf("\n");
	}
}