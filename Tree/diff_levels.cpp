/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* The Node structure is
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */
/*You are required to complete this function*/
int getLevelDiff(Node *root)
{
   queue<Node*> q;
   int even=0;
   int odd=0;
   q.push(root);
   int f=1;
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
           if(f%2==0)
           even+=temp->data;
           else
           odd+=temp->data;
           delete temp;
       }
       f++;
   }
   return odd-even;
}