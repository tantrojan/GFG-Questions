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

void reverse_list(node** h)
{
	node* prev=NULL;
	node* next=NULL;
	node* current=(*h);
	while(current!=NULL)
	{
		next=current->next;
		current->next=prev;
		prev=current;
		current=next;
	}
	(*h)=prev;
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
	reverse_list(&head);
	for(node* i=head;i!=NULL;i=i->next)
	{
		cout<<i->data<<' ';
	}
	return 0;
}