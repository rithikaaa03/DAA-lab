#include <stdio.h>
#include <stdlib.h>
void matmulti(int arr1[20][20],int arr2[20][20],int arr3[20][20],int m,int n,int p,int q)

{

	for (int i=0;i<m;i++)
	{
		for(int j=0;j<q;j++)
		{
			arr3[i][j]=0;
			for(int k=0;k<n;k++)
			{
				arr3[i][j]+=arr1[i][k]*arr2[k][j];
			}
			printf("%d\t",arr3[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int m,n,p,q;
	printf("enter dimensions of matrix 1\n");
	scanf("%d %d",&m,&n);
	printf("enter dimensions of matrix 2\n");
	scanf("%d %d",&p,&q);
	if (n!=p)
		printf("matrixes cant be multiplied\n");
	else
	{
		int arr1[20][20], arr2[20][20],arr3[20][20];
		printf("enter elements of matrix1\n");
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				scanf("%d",&arr1[i][j]);
			}
		}
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				printf("%d\t",arr1[i][j]);
			}
			printf("\n");
		}
		
		printf("enter elements of matrix2\n");
		for(int i=0;i<p;i++)
		{
			for(int j=0;j<q;j++)
			{
				scanf("%d",&arr2[i][j]);
			}
			
		}
		for(int i=0;i<p;i++)
		{
			for(int j=0;j<q;j++)
			{
				printf("%d\t",arr2[i][j]);
			}
			printf("\n");
		}
		printf("product of 2 matrices are\n");
		matmulti(arr1,arr2,arr3,m,n,p,q);
	}
}
