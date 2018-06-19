// Palindrome check
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

int main()
{
	int n;
	cin>>n;
	stack<int> st;
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
	for(node* i=head;i!=NULL;i=i->next)
	{
		st.push(i->data);
	}
	int flag=1;
	for(node* i=head;i!=NULL;i=i->next)
	{
		if(st.top()!=(i->data))
		{
			flag=0;
			break;
		}
		st.pop();
	}
	cout<<flag;
	return 0;
}