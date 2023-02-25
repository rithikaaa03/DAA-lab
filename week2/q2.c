#include <stdio.h>
#include <stdlib.h>
int opcount1=0;
int opcount2=0;

int* prime(int num)
{
	int t=0;
	int* arr=calloc(20,sizeof(int));
	for(int i=2;i<=num;i++)
	{
		opcount1++;
		if(num%i==0)
		{
			arr[t++]=i;
			num=num/i;
			i=1;	
		}
	}
	return arr;
}
int main()
{
	int *arr1,*arr2;
	int a,b,i,j;
	printf("enter the 2 numbers:\n");
	scanf("%d %d",&a,&b);
	arr1=prime(a);
	arr2=prime(b);
	int prod=1;
	int* arr3=calloc(20,sizeof(int));
	printf("prime factors of %d is\n",a);
	for(i=0;arr1[i]!=0;i++)
		printf("%d\t",arr1[i]);
	printf("\n");
	printf("prime factors of %d is\n",b);
	for(i=0;arr2[i]!=0;i++)
		printf("%d\t",arr2[i]);
	for(i=0;arr1[i]!=0;i++)
	{
		for(j=0;arr2[j]!=0;j++)
		{
			opcount2++;
			if(arr1[i]==arr2[j])
			{
				prod=prod*arr1[i];
				arr2[j]=-999;
				break;
			}
		}
	}
	printf("\nprod of all common factors is the gcd which is %d\n",prod);
	printf("count of operations is %d,%d\n",opcount1,opcount2);
}