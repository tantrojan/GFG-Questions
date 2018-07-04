//Create BST
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

void Create_bst(Node* root,int data)
{
	if((root)->left==NULL && data<= root->data)
		root->left=newNode(data);
	else if(root->right==NULL && data> root->data)
		root->right=newNode(data);
	else if(root->data >= data)
		Create_bst(root->left,data);
	else if(root->data < data)
		Create_bst(root->right,data);
}

void bfs(Node* root)
{
	queue<Node*> q;
	q.push(root);
	while(!q.empty())
	{
		Node* temp=q.front();
		q.pop();
		if(temp->left)
			q.push(temp->left);
		if(temp->right)
			q.push(temp->right);
		cout<<temp->data<<' ';
		delete(temp);
	}

}

int main()
{
	int n,r;
	cin>>n;
	cin>>r;
	Node* root=newNode(r);
	while(n--)
	{
		cin>>r;
		Create_bst(root,r);
	}

	bfs(root);
	return 0;
}