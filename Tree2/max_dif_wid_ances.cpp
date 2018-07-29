
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* A binary tree node
struct Node
{
    int data;
    Node* left, * right;
}; */
/* Your are required to 
complete this method*/
int ma,m_dif;

void dfs(Node* root,int n)
{
    if(root==NULL)
    {
        return;
    }
    n=max(root->data,n);
    m_dif=max(m_dif,n-root->data);
    dfs(root->left,n);
    dfs(root->right,n);
}

int maxDiff(Node* root)
{
    ma=INT_MIN;
    m_dif=INT_MIN;
    dfs(root,ma);
    if(m_dif==0)
        return -1;
    return m_dif;
}