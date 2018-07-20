/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::inorderTraversal(TreeNode* A) {
    stack<TreeNode*> st;
    vector<int> res;
    while(1)
    {
        if(A!=NULL)
        {
            st.push(A);
            A=A->left;
        }
        else
        {
            if(st.empty())
                break;
            TreeNode* temp=st.top();
            st.pop();
            res.push_back(temp->val);
            A=temp->right;
        }
    }
    return res;
}
