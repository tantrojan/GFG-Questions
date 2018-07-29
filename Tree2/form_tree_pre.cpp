
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*Structure of the Node of the binary tree is as
struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
};
*/
// function should return the root of the new binary tree formed
struct Node *constructTree(int n, int pre[], char preLN[])
{
    
    int i=0;
    Node* root=newNode(pre[0]);
    stack<Node*> s;
    s.push(root);
    for(i=1;i<n;i++)
    {
        Node* temp=s.top();
        if(temp->left==NULL)
        {
            temp->left=newNode(pre[i]);
            if(preLN[i]=='N')
            {
                s.push(temp->left);
            }
        }
        else
        {
            temp->right=newNode(pre[i]);
            s.pop();
            if(preLN[i]=='N')
            {
                s.push(temp->right);
            }
        }
    }
    return root;
}