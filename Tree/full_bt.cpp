
bool isFullTree (struct Node* root)
{
 if(root==NULL)
 return true;
 if(root->left && root->right)
 {
     return (isFullTree(root->left) && isFullTree(root->right));
 }
 if(root->left || root->right)
 {
     return false;
 }
 return true;
}