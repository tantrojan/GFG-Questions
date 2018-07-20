/* A binary tree node
struct Node
{
    int data;
    Node* left, * right;
}; */
/*you are required to 
complete this function */
bool hasPathSum(Node *root, int sum)
{
    
    if(root==NULL)
    return false;
    int newsum=sum-(root->data);
    if(!root->left && !root->right)
    {
        if(newsum==0)
        return 1;
        else
        return 0;
    }
    return (hasPathSum(root->left,newsum) || hasPathSum(root->right,newsum));
}