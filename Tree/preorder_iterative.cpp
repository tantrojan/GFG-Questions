/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::preorderTraversal(TreeNode* A) {
    stack<TreeNode*> st;
    vector<int> res;
    st.push(A);
    while(!st.empty())
    {
        TreeNode* temp=st.top();
        st.pop();
        res.push_back(temp->val);
        if(temp->right)
        st.push(temp->right);
        if(temp->left)
        st.push(temp->left);
    }
    return res;
}
