//Level order traversal and max width
#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node* left;
	node* right;
};
int max_width=0;

node* newNode(int data)
{
	node* n=new node;
	n->data=data;
	n->left=NULL;
	n->right=NULL;
	return n;
}

void bfs(node* root)
{
	queue<node*> q;
	q.push(root);
	while(!q.empty())
	{
		int c=q.size();
		max_width=max(max_width,c);
		while(c--)
		{
			node* temp=q.front();
			q.pop();
			if(temp->left)
				q.push(temp->left);
			if(temp->right)
				q.push(temp->right);
			cout<<temp->data<<' ';
			delete(temp);
		}
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
	bfs(root);
	return 0;
}