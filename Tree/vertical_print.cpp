/* A binary tree node has data, pointer to left child
   and a pointer to right child 
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */
/* Should print vertical order such that each vertical line
   is separated by $ */
map<int, vector<int> > cols;

void inorder(int i,Node* root)
{
    if(root==NULL)
    return;
    cols[i].push_back(root->data);
    inorder(i-1,root->left);
    inorder(i+1,root->right);
    
    
   
}

void verticalOrder(Node *root)
{
        cols.clear();
    inorder(0,root);
    auto it=cols.begin();
    for(;it!=cols.end();it++)
    {
        auto t=(*it).second.begin();
        sort((*it).second.begin(),(*it).second.end());
        for(;t!=(*it).second.end();t++)
        {
            cout<<(*t)<<' ';
        }
         cout<<'$';
    }
    
}