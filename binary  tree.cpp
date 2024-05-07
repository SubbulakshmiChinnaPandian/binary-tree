#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*right;
	struct node*left;
};
struct node*createnode(struct node*root,int data)
{
	if(root==NULL)
	{
		struct node *newnode;
		newnode=(struct node)malloc(sizeof(struct node*));
		newnode->key=data;
		newnode->right=NULL;
		newnode->left=NULL;
		return newnode;
	}
	else if(root->key<data)
	{
		root->right=createnode(root->right,data);
	}
	else
	{
		root->left=createnode(root->left,data);
	}
	return root;
}
int main()
{
	struct node*root=NULL;
	struct node*root=newnode(1);
	root->left=newnode(2);
	root->right=newnode(3);
}
