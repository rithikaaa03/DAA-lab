#include <stdio.h>
#include <stdlib.h>

struct node
{
	struct node* rchild;
	struct node* lchild;
	int data;
}*root=NULL;
struct node* bst(struct node* p,int key)
{
	if (p==NULL)
	{
		p=malloc(sizeof(struct node));
		p->data=key;
		p->rchild=NULL;
		p->lchild=NULL;
		return p;
	}
	else if (key<p->data)
		p->lchild=bst(p->lchild,key);
	else if (key>p->data)
		p->rchild=bst(p->rchild,key);
	return p;
}
int search(struct node* p,int key)
{	
	while (p)
	{
		if (p->data==key)
		{
			printf("key found\n");
			return 1;
		}
		else if (key<p->data)	
			p=p->lchild;
		else if (key>p->data)
			p=p->rchild;
	}
	printf("key not found\n");
	return 0;
	
}
void inorder(struct node* p)
{
	if (p)
	{
		inorder(p->lchild);
		printf("%d\t",p->data);
		inorder(p->rchild);
	}
}
void preorder(struct node* p)
{
	if(p)
	{
		printf("%d\t",p->data);
		preorder(p->lchild);
		preorder(p->rchild);
	
	}
	
}
void postorder(struct node* p)
{
	if (p)
	{
		postorder(p->lchild);
		postorder(p->rchild);
		printf("%d\t",p->data);
		
	}
}
void main()
{
	root=bst(root,30);
	bst(root,10);
	bst(root,5);
	bst(root,40);
	bst(root,35);
	bst(root,15);
	bst(root,45);
	int q=search(root,7);
	if (q==0)
		bst(root,7);
	inorder(root);
	printf("\n");
	preorder(root);
	printf("\n");
	postorder(root);
	printf("\n");
}
