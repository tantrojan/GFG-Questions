//Depth first search (pre,in,post orders and the no of elements in each level)
#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	node* left;
	node* right;
};

int level[1000001]={0};
int max_level=0;

node* newNode(int data)
{
	node* n=new node;
	n->data=data;
	n->left=NULL;
	n->right=NULL;
	return n;
}

void preorder(node* root,int c)
{
	if(root==NULL)
		return;
	level[c]++;
	if(c>max_level)
		max_level=c;
	cout<<root->data<<' ';
	preorder(root->left,c+1);
	preorder(root->right,c+1);
}

void inorder(node* root)
{
	if(root==NULL)
		return;
	inorder(root->left);
	cout<<root->data<<' ';
	inorder(root->right);
}

void postorder(node* root)
{
	if(root==NULL)
		return;
	postorder(root->left);
	postorder(root->right);
	cout<<root->data<<' ';
}

int main()
{
	node* root=newNode(1);
	root->left=newNode(2);
	root->right=newNode(3);
	root->left->left=newNode(4);
	root->right->left=newNode(5);
	root->right->left->left=newNode(6);
	cout<<"Pre Order :";
	preorder(root,1);
	cout<<endl<<"In Order :";
	inorder(root);
	cout<<endl<<"Post Order :";
	postorder(root);
	cout<<endl;
	for(int i=1;i<=max_level;i++)
	{
		cout<<"No of elements in level ["<<i<<"] :"<<level[i]<<endl;
	}
	return 0;
}