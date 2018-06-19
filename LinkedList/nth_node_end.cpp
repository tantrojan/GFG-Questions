// Nth Node from the end
#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node *next;
};
node *head=NULL,*rear=NULL;

node* getNode(int data)
{
	node* n=new node;
	n->data=data;
	n->next=NULL;
	return n;
}

void nth_fromend(int n)
{
	int c=0;
	node* i;
	for(i=head;i!=NULL && c<n;i=i->next)
	{
		c++;
	}
	node* j;
	for(j=head;i!=NULL;i=i->next,j=j->next);
	cout<<j->data;
}

int main()
{
	int k;
	cin>>k;
	while(k--)
	{
		int x;
		cin>>x;
		if(head==NULL)
		{
			head=getNode(x);
			rear=head;
		}
		else
		{
			rear->next=getNode(x);
			rear=rear->next;
		}
	}
	int n,c=0;
	cin>>n;
	nth_fromend(n);
	return 0;
}