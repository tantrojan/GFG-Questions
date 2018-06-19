//Deleting a linked list
#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node *next;
};

node* getNode(int x)
{
	node *n=new node;
	n->data=x;
	n->next=NULL;
	return n;
}

void deletelist(node **h)
{
	if((*h)!=NULL)
	{
		deletelist(&((*h)->next));
		(*h)=NULL;
		delete(*h);
	}
}

int main()
{
	node *head=NULL;
	int n;
	cin>>n;
	while(n--)
	{
		int x;
		cin>>x;
		if(head==NULL)
		{
			head=getNode(x);
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
	}
	deletelist(&head);
	return 0;

}