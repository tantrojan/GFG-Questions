//Reverse Level Order Traversal
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

stack<node*> st;
	
void bfs(node* root)
{

	queue<node*> q;
	q.push(root);
	while(!q.empty())
	{
		node* temp=q.front();
		q.pop();
		st.push(temp);
		if(temp->right)
			q.push(temp->right);
		if(temp->left)
			q.push(temp->left);
	}

}
void reversePrint(node *root)
{
    bfs(root);
    while(!st.empty())
    {
        cout<<(st.top())->data<<' ';
        st.pop();
    }
}

int main()
{
	node* root=newNode(1);
	root->left=newNode(3);
	root->right=newNode(2);
	root->left->left=newNode(4);
	root->right->left=newNode(5);
	root->right->left->left=newNode(6);
	reversePrint(root);
	return 0;
}