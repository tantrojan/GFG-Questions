/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node {
    int data;
    Node* left, * right;
}; */
/* Should return true if tree represented by root is BST. 
   For example, return  value should be 1 for following tree.
         20
     /      \ 
   10       30
  and return value should be 0 for following tree.
         10
     /      \ 
   20       30 */
   
int isBSTUtil(struct Node* node, int mi, int ma) 
{ 
  /* an empty tree is BST */
  if (node==NULL) 
     return 1;
       
  /* false if this node violates the min/max constraint */ 
  if (node->data < mi || node->data > ma) 
     return 0; 
 
  /* otherwise check the subtrees recursively, 
   tightening the min or max constraint */
  return
    isBSTUtil(node->left, mi, node->data-1) &&  // Allow only distinct values
    isBSTUtil(node->right, node->data+1, ma);  // Allow only distinct values
} 

bool isBST(Node* root) {

    return (isBSTUtil(root,0,1001));
}