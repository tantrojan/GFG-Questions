//Connect node sin the same level
#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node* left;
	node* right;
	node* next;
};
vector<node*> nodes_inlevel;

node* newNode(int data )
{
	node* n=new node;
	n->data=data;
	n->left=NULL;
	n->right=NULL;
	n->next=NULL;
	return n;
}

void bfs(node* root)
{
	queue<node*> q;
	q.push(root);
	while(!q.empty())
	{
		int c=q.size();
		nodes_inlevel.push_back(q.front());
		node* prev=NULL;
		while(c--)
		{
			node* n=q.front();
			q.pop();
			if((n->left)!=NULL)
				q.push(n->left);
			if((n->right)!=NULL)
				q.push(n->right);
			if(prev!=NULL)
				prev->next=n;
			prev=n;
		}
		prev->next=NULL;
	}	
}


int main()
{
	node* root=newNode(1);
	root->left=newNode(2);
	root->right=newNode(3);
	root->left->left=newNode(4);
	root->right->left=newNode(5);
	root->right->left->left=newNode(6);

	bfs(root);
	for(int i=0;i<nodes_inlevel.size();i++)
	{
		node* n=nodes_inlevel[i];
		cout<<"LEVEL ["<<i+1<<"] :";
		while(n!=NULL)
		{
			cout<<n->data<<' ';
			n=n->next;
		}
		cout<<endl;
	}
	return 0;
}