//check for identical trees
#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node* left;
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

bool check_identical(node* t1, node* t2)
{
		if(t1==NULL && t2==NULL)
			return true;
		if((t1==NULL && t2!=NULL) || (t1!=NULL && t2==NULL))
			return false;
		if((t1->data)==(t2->data))
		{
			return(check_identical(t1->left,t2->left) && check_identical(t1->right,t2->right));
		}
		return false;
}


int main()
{
	node* root=newNode(1);
	root->left=newNode(2);
	root->right=newNode(3);
	root->left->left=newNode(4);
	root->right->left=newNode(5);
	root->right->left->left=newNode(6);

	node* root2=newNode(1);
	root2->left=newNode(2);
	root2->right=newNode(4);
	root2->left->left=newNode(4);
	root2->right->left=newNode(5);
	root2->right->left->left=newNode(6);
	cout<<check_identical(root,root2);
	return 0;
}