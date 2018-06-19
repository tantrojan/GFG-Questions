
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* Link list Node 
struct Node {
    int data;
    struct Node* next;
}; */
/* Should return data of intersection point of two linked
   lists head1 and head2.
   If there is no intersecting point, then return -1. */
int intersectPoint(Node* head1, Node* head2)
{
    int c1=0,c2=0;
    Node *i=head1,*j=head2;
    for(;i!=NULL;i=i->next)
    {
        c1++;
    }
    for(;j!=NULL;j=j->next)
    {
        c2++;
    }
    i=head1;j=head2;
    if(c1>c2)
    {
        int k=0;
        while(k<(c1-c2))
        {
            i=i->next;
            k++;
        }
    }
    else if(c2>c1)
    {
        int k=0;
        while(k<(c2-c1))
        {
            j=j->next;
            k++;
        }
    }
    for(;i!=NULL && i!=j;i=i->next,j=j->next);
    if(i==NULL)
    return -1;
    else
    return i->data;
}