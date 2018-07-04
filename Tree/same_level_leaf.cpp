/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* The structure of the binary tree is as follows
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/
/*You are required to complete this method*/
bool check(Node *root)
{
    int level=0,leaf=-1;
    bool flag=true;
    queue<Node*> q;
    q.push(root);
    while(!q.empty())
    {
        int c=q.size();
        while(c--)
        {
            Node* temp=q.front();
            q.pop();
            if(temp->left)
            q.push(temp->left);
            if(temp->right)
            q.push(temp->right);
            if(temp->right==NULL && temp->left==NULL)
            {
                if(leaf==-1 || leaf==level)
                leaf=level;
                else
                {
                    flag=false;
                    break;
                }
            }
        }
        level++;
    }
    return flag;
}