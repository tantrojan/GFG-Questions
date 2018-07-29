/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*Structure of the node of the binary tree
struct Node
{
	int key;
	Node* left, *right;
};
*/
// function should return the height of the binary tree
int findTreeHeight(Node* root)
{
	if(root==NULL)
	{
	    return 0;
	}
	if((root->left && root->left->right==root) || (root->right && root->right->left==root))
	{
	    return 1;
	}
	else
	
	return max(findTreeHeight(root->left),findTreeHeight(root->right))+1;
}
