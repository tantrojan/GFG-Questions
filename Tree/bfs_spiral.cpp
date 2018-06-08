//Level order traversal SPIRAL
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

void bfs_spiral(node* root)
{
    queue<node*> q;
	q.push(root);
	int i=0;
	while(!q.empty())
	{
		int c=q.size();
		stack<node*> st;
		while(!q.empty())
		{
			st.push(q.front());
			q.pop();
		}
		while(!st.empty())
		{
			q.push(st.top());
			st.pop();
		}
		while(c--)
		{
			node* temp=q.front();
			q.pop();
			if(i%2!=0)
			{
				if(temp->left)
				q.push(temp->left);
				if(temp->right)
				q.push(temp->right);
			}
			else
			{
				if(temp->right)
				q.push(temp->right);
				if(temp->left)
				q.push(temp->left);
			}
			cout<<temp->data<<' ';
			delete(temp);
		}
		i++;
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
	bfs_spiral(root);
	return 0;
}