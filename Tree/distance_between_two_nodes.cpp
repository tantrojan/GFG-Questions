   
int distance(Node* root,int val)
{
    if(root==NULL)
        return -1;
    if(root->data==val)
    {
        return 0;
    }
    else
    {
        int l_dist=distance(root->left,val);
        int r_dist=distance(root->right,val);
        if(l_dist>=0)
        return l_dist+1;
        else if(r_dist>=0)
        return r_dist+1;
        
        return -1;
    }
}

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

int findDist(Node* root, int a, int b)
{
    Node* LCA_ab=LCA(root,a,b);
    return (distance(root,a)+distance(root,b)-2*distance(root,LCA_ab->data));
}