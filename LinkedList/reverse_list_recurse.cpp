// Reverse a linked list
#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node* next;
};

// node* head=NULL,rear=NULL;
node* getNode(int x)
{
	node* n=new node;
	n->data=x;
	n->next=NULL;
	return n;
}
node *newhead=NULL;
node* reverse_list_recurse(node** h)
{
	node *head=*h;
	if(head==NULL || head->next==NULL)
	{	
		newhead=head;
		return head;
	}
	reverse_list_recurse(&(head->next));
	head->next->next=head;
	head->next=NULL;
	return (head);
}

int main()
{
	int n;
	cin>>n;
	node *head=NULL,*rear=NULL;
	while(n--)
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
	reverse_list_recurse(&head);
	for(node* i=newhead;i!=NULL;i=i->next)
	{
		cout<<i->data<<' ';
	}
	return 0;
}