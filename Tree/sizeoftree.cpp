//Find the size of the tree
#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node *left;
	node *right;
};

node* newNode(int data)
{

  node* n= new node;
  n->data=data;
  n->left=NULL;
  n->right=NULL;
  return(n);
}

int size(node* temp)
{
	if(temp==NULL)
		return 0;
	else
	return (size(temp->left)+size(temp->right)+1);	
}

int main()
{
	node* root=newNode(1);
	root->left=newNode(2);
	root->right=newNode(3);
	root->left->left=newNode(4);
	root->right->right=newNode(5);
	cout<<size(root);
	return 0;
}