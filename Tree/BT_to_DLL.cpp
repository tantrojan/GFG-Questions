// This function should convert a given Binary tree to Doubly
// Linked List
// root --> Root of Binary Tree
// head_ref --> Pointer to head node of created doubly linked list
Node* p=NULL;
void change_link(Node* root)
{
    if(root==NULL)
    return;
    change_link(root->left);
    if(p==NULL)
    {
        
        root->left=NULL;
        p=root;
        // cout<<p->data<<' ';
    }
    else
    {
        p->right=root;
        root->left=p;
        p=root;
        // cout<<p->data<<' ';
    }
    change_link(root->right);
}

void BToDLL(Node *root, Node **head_ref)
{
    
    Node* temp=root;
    while(temp->left!=NULL)
    {
        // cout<<"$";
        temp=temp->left;
    }
    (*head_ref)=temp;
    // cout<<((*head_ref)->data);
    p=NULL;
    change_link(root);
    p->right=NULL;

}
