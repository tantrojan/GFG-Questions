//Print reverse of a linked list
#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node* next;
};

node* getNode(int x)
{
	node *n=new node;
	n->data=x;
	n->next=NULL;
	return n;
}

node print_reverse(node **h)
{
	if((*h)!=NULL)
	{
		print_reverse(&((*h)->next));
		cout<<(*h)->data<<' ';
	}
}

int main()
{
	node *head=NULL;
	int n,i;
	cin>>n;
	for(i=0;i<n;i++)
	{
		int x;
		cin>>x;
		if(head==NULL)
		{
			head->data=x;
			head->next=NULL;
		}
		else
		{
			node *j;
			j=head;
			while((j->next)!=NULL)
			{
				j=j->next;
			}
			j->next=getNode(x);
		}
		print_reverse(&head);
	}
	return 0;
}