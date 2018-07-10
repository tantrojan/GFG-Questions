/* A binary tree node
struct Node
{
    int data;
    Node* left, * right;
}; */
void diagonalPrint(Node *root)
{
   queue<Node*> q;
   q.push(root);
   while(!q.empty())
   {
       Node* temp=q.front();
       while(temp)
       {
           if(temp->left)
           q.push(temp->left);
           cout<<temp->data<<' ';
           temp=temp->right;
       }
       q.pop();
   }
}