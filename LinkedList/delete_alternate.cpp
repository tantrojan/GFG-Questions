/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*
Structure of the node of the binary tree
struct Node
{
	int data;
	struct Node *next;
};
*/
// Complete this function
void deleteAlt(struct Node *head){
    Node *i=head;
    Node *j=head->next;
    Node *temp;
    while(i && j)
    {
        if(j->next!=NULL)
        {
            temp=j;
            j=j->next;
            free(temp);
            i->next=j;
            i=j;
            j=j->next;
        }
        else
        {
            temp=j;
            i->next=NULL;
            j=NULL;
            i=NULL;
            free(temp);
        }
    }
    if(j==NULL && i!=NULL)
    {
        i->next=NULL;
    }
}
