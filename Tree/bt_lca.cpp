Node * LCA(Node* root ,int n1 ,int n2 )
{
   if(root==NULL)
        return NULL;
    
    if(root->data==n1 || root->data==n2)
        return root;
    
    Node* lca_left=LCA(root->left,n1,n2);
    Node* lca_right=LCA(root->right,n1,n2);
    
    if(lca_left && lca_right)
        return root;
    
    if(lca_left!=NULL)
    {
        return lca_left;
    }
    return lca_right;
}