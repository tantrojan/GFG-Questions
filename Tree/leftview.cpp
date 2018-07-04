
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* A binary tree node
struct Node
{
    int data;
    Node* left, * right;
}; */
// A wrapper over leftViewUtil()
void leftView(Node *root)
{
   queue<Node*> q;
   q.push(root);
   while(!q.empty())
   {
       int c=q.size();
       int f=0;
       while(c--)
       {
           Node* temp=q.front();
           q.pop();
           if(temp->left)
           q.push(temp->left);
           if(temp->right)
           q.push(temp->right);
           if(f==0)
           {
               cout<<temp->data<<' ';
               f=1;
           }
           delete temp;
       }
   }
}