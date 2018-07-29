/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*Complete the function below
Node is as follows:
struct Node{
	int data;
	Node *left,*right;
};
*/
Node* p;
Node* head;

void dfs(Node* root)
{
    if(root==NULL)
    {
        return;
    }
    if(!root->left && !root->right)
    {
        if(p==NULL)
        {
            head=root;
            p=root;
        }
        else
        {
            p->right=root;
            root->left=p;
            p=p->right;
        }
        return;
    }
    dfs(root->left);
    dfs(root->right);
}

Node *convertToDLL(Node *root,Node **head_ref)
{
    p=NULL;
    head=NULL;
    dfs(root);
    *head_ref=head;
    return head;
}