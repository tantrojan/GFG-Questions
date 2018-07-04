/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* Tree node class
struct Node
{
    int data; 
    Node *left, *right; 
}; */
// Method that prints the bottom view.
map<int, vector<int> > cols;

void inorder(int i,Node* root)
{
    if(root==NULL)
    return;
    inorder(i-1,root->left);
    cols[i].push_back(root->data);
    inorder(i+1,root->right);
}

void bottomView(Node *root)
{   
    cols.clear();
    inorder(0,root);
    auto it=cols.begin();
    for(;it!=cols.end();it++)
    {
        cout<<(*it).second[(*it).second.size()-1]<<' ';
    }
}
