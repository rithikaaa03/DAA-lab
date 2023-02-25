#include <stdio.h>
#include <stdlib.h>

struct node
{	 
	struct node* next;
	int data;
};
void link(struct node** s,int data)
{
	struct node* p;
	p=*s;
	if (*s==NULL)
	{
		p=malloc(sizeof(struct node));
		p->data=data;
		p->next=NULL;
		*s=p;	
	}
	else
	{
		while(p->next)
			p=p->next;
		p->next=malloc(sizeof(struct node));
		p->next->data=data;
		p->next->next=NULL;
	}
}
void display(struct node* p)
{
	struct node* t=p;
	while(t)
	{
		printf("%d\t",t->data);
		t=t->next;
	}
}
void main()
{
	int i,j,n;
	printf("enter the number of vertices\n");
	scanf("%d",&n);
	struct node** p=malloc(n*sizeof(struct node*));
	for(i=0;i<n;i++)
		link(&p[i],i);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("is there an edge between %d and %d. if yes enter y and if no enter n\n",i,j);
			char op,temp;
			scanf("%c",&temp);
			scanf("%c",&op);
			if (op=='y')
				link(&p[i],j);
				
		}
	}
	for(i=0;i<n;i++)
	{
		display(p[i]);
		printf("\n");
	}
}