#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int compare(char input[20],char sub[20])
{
	int n=strlen(input);
	int m=strlen(sub);
	//printf("%d %d",m,n);
	int j;
	for (int i=0;i<=n-m;i++)
	{
		j=0;
		while (j<m && sub[j]==input[i+j])
		{
			j=j+1;
		}
		if (j==m)
			return i;
		
	}
	return -1;
}
int main()
{
	char input[20];
	char sub[20];
	//char dummy;
	printf("enter the string:\n");
	//scanf("%c",&dummy);
	scanf(" %s",input);
	printf("enter substring:\n");
	//scanf("%c",&dummy);
	scanf(" %s",sub);
	int ans=compare(input,sub);
	if(ans==-1)
		printf("substring not found\n");
	else
		printf("string found at position %d\n",ans);

}