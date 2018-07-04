// delete a tree completely
#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	Node* left;
	Node* right;
};

Node* newNode(int data)
{
	Node* n=new Node;
	n->data=data;
	n->left=NULL;
	n->right=NULL;
	return n;
}

void delete_complete(Node* r)
{
	if(r==NULL)
		return;
	delete_complete(r->left);
	delete_complete(r->right);

	printf("\n Deleting node : %d\n",n->data);
	free(n);

}

int main()
{
	Node* root=newNode(0);
	root->left=newNode(1);
	root->right=newNode(2);
	root->left->left=newNode(3);
	root->right->right=newNode(5);
	root->left->right=newNode(4);
	root->right->right=newNode(6);

	delete_complete(root);
	root=NULL:

	cout<<"Tree Deleted.";
	return 0;
}