//Vertical Sum
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

map<int,int> columns;

struct node
{
	int data;
	node* left;
	node* right;
};

node* newNode(int data)
{
	node* n = new node;
	n->data=data;
	n->left=NULL;
	n->right=NULL;
	return n;
}


void vertical_sum(node* root,int col)
{
	if(root==NULL)
		return;
	columns[col]+=root->data;
	vertical_sum(root->left,col-1);
	vertical_sum(root->right,col+1);
}



int main()
{
	node* root=newNode(1);
	root->left=newNode(3);
	root->right=newNode(2);
	root->left->left=newNode(4);
	root->right->left=newNode(5);
	root->right->left->left=newNode(6);
	vertical_sum(root,0);
	map<int,int>::iterator it;
	for(it=columns.begin();it!=columns.end();it++)
	{
		cout<<"Column["<<it->first<<"] :"<<it->second<<endl;
	}
	return 0;
}