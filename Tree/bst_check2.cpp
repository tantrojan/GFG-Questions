vector<int> res;

void inorder(Node* root)
{
    if(root==NULL)
    return;
    else
    inorder(root->left);
    res.push_back(root->data);
    inorder(root->right);
}

bool isBST(Node* root) {

    if(root==NULL)
    return true;
    res.clear();
    inorder(root);
    auto it=res.begin();
    int prev=(*it);
    it++;
    for(;it!=res.end();it++)
    {
        if((*it)<=prev)
        return false;
        prev=(*it);
    }
    return true;
}