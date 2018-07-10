
/* A binary tree Node
struct Node
{
    int data;
    Node* left, * right;
}; */
void getleaves(Node* root)
{
    if(root==NULL)
    return;
    getleaves(root->left);
    if(!root->left && !root->right)
    cout<<root->data<<' ';
    getleaves(root->right);
}

void printBoundary(Node *root)
{
    //  if(root==NULL)
    //  return;
     stack<int> right_bound;
     Node* temp=root;
     while(temp->left || temp->right)
     {
         cout<<temp->data<<' ';
         if(temp==root)
         {
             if(!temp->left)
             break;
         }
         if(!temp->left)
         {
             temp=temp->right;
         }
         else
         {
             temp=temp->left;
         }
     }
     getleaves(root);
     temp=root;
     while(temp->left || temp->right)
     {
         if(temp==root)
         {
             if(!temp->right)
             break;
         }
         if(temp!=root)
         {
             right_bound.push(temp->data);
         }
         if(!temp->right)
         {
             temp=temp->left;
         }
         else
         {
             temp=temp->right;
         }
     }
     while(!right_bound.empty())
     {
         cout<<right_bound.top()<<' ';
         right_bound.pop();
     }
}