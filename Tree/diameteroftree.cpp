//Find the diameter of the tree
#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node* left ;
	node* right;
};

node* newNode(int data)
{
	node* n=new node;
	n->data=data;
	n->left=NULL;
	n->right=NULL;
	return n;
}


int height(node* temp)
{
	if(temp==NULL)
		return 0;

	return max(height(temp->left),height(temp->right))+1;
}

int diameter(node* temp){
	if(temp==NULL)
		return 0;

	return max(height(temp->left)+height(temp->right)+1, max(diameter(temp->left),diameter(temp->right)));
}

int main()
{
	node* root=newNode(1);
	root->left=newNode(2);
	root->right=newNode(3);
	root->left->left=newNode(4);
	root->right->left=newNode(5);
	root->right->left->left=newNode(6);
	cout<<diameter(root);
	return 0;
}