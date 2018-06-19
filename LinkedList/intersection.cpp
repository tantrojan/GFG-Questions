
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*
structure of the node is as
struct node
{
	int data;
	struct node* next;
};
*/
struct node* findIntersection(struct node* head1, struct node* head2)
{
    map<int,int> m;
    map<int,int> m2;
    node *i=head1;
    for(;i!=NULL;i=i->next)
    {
        m[i->data]++;   
    }
    i=head2;
    node *res=NULL;
    for(;i!=NULL;i=i->next)
    {
        m2[i->data]++;
        if(m[i->data]>=m2[i->data])
        {
            // m[i->data]++;
            push(&res,i->data);
        }
    }
    node *j;
    for(i=res;i!=NULL;i=i->next)
    {
        for(j=res;(j->next)!=NULL;j=j->next)
        {
            if((j->data)>(j->next->data))
            {
                swap(j->data,j->next->data);
            }
        }
    }
    return res;
}