/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* BST Node structure  used in the program
 struct Node
 {
     int data;
     Node* left, *right;
}; */
/*  modifies the root of the bst */
int sum=0;

void change_values(Node *root)
{
    if(root==NULL)
    return;
    change_values(root->right);
    root->data+=sum;
    sum=root->data;
    change_values(root->left);
}

void modify(Node **root)
{
    sum=0;
    change_values((*root));
    
}