//Populate inorder successor for all the nodes
#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node* left;
	node* right;
	node*next;
};

node* inorder_successor=NULL;

node* newNode(int data)
{
	node* n=new node;
	n->data=data;
	n->left=NULL;
	n->right=NULL;
	n->next=NULL;
	return n;
}
node* pr=NULL;

void populate_func(node* temp)
{
    if(pr==NULL)
    {
        inorder_successor=temp;
        pr=temp;
    }
    else{
        pr->next=temp;
        pr=temp;
    }
    
    
}
/* Set next of p and all descendents of p by traversing them in reverse Inorder */
void populateNext(struct node* p)
{
    if(p==NULL)
        return;
    populateNext(p->left);
    populate_func(p);
    populateNext(p->right);
}

int main()
{
	node* root=newNode(1);
	root->left=newNode(2);
	root->right=newNode(3);
	root->left->left=newNode(4);
	root->right->left=newNode(5);
	root->right->left->left=newNode(6);
	cout<<"Inorder Successors :";
	populateNext(root);
	for(node* i=inorder_successor;i!=NULL;i=i->next)
	{
		cout<<i->data<<' ';
	}
	return 0;
}