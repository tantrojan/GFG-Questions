
/*Structure of the node of the binary tree is as
struct Node
{
	int data;
	Node *left, *right;
};*/
// function should return the sum of all the 
// leaf nodes of the binary tree 
int sumLeaf(Node* root)
{
    queue<Node*> q;
    q.push(root);
    int sum=0;
    while(!q.empty())
    {
        Node* temp=q.front();
        q.pop();
        if(temp->left==NULL && temp->right==NULL)
        sum+=temp->data;
        if(temp->left)
        q.push(temp->left);
        if(temp->right)
        q.push(temp->right);
    }
    return sum;
}