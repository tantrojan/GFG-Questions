/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::postorderTraversal(TreeNode* A) {
    stack<TreeNode*> st;
    st.push(A);
    stack<int> r;
    while(!st.empty())
    {
        TreeNode* temp=st.top();
        st.pop();
        r.push(temp->val);
        if(temp->left)
        st.push(temp->left);
        if(temp->right)
        st.push(temp->right);

    }
    vector<int> res;
    while(!r.empty())
    {
        res.push_back(r.top());
        r.pop();
    }
    return res;
}
