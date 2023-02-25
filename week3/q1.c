#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n;
	printf("enter number of elements in array\n");
	scanf("%d",&n);
	int arr[20];
	printf("enter array elements\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int opcount1=0;
	int opcount2=0;
	int temp;
	for(int i=0;i<=n-2;i++)
	{
		for(int j=0;j<=n-2-i;j++)
		{
			opcount1++;
			if(arr[j]>arr[j+1])
			{
				opcount2++;
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}	
		}
	}
	printf("after bubble sort-ascending order is:\n");
	for(int i=0;i<n;i++)
		printf("%d\t",arr[i]);
	printf("\ncount of comparison is %d and count of swapping is %d\n",opcount1,opcount2);
}