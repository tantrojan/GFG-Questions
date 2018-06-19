/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* Link list Node  
struct Node {
    int data;
    Node* next;
}; */
Node* SortedMerge(Node* head1,   Node* head2)
{
    Node *i=head1,*j=head2;
    Node *res=NULL,*restail=NULL;
    for(;i!=NULL && j!=NULL;)
    {
        if(i->data>j->data)
        {
                append(&res,&restail,j->data);
                j=j->next;
        }
        else 
        {
                append(&res,&restail,i->data);
                i=i->next;
        }
    }
    while(i!=NULL)
    {
            append(&res,&restail,i->data);
            i=i->next;
    }
    while(j!=NULL)
    {
            append(&res,&restail,j->data);
            j=j->next;
    }
    return res;
}