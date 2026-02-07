class Solution {
public:
    // Iterative Preorder
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        if(!root) return ans;
        stack<TreeNode*> st;
        st.push(root);
        while(!st.empty()){
            TreeNode *temp = st.top();
            st.pop();
            ans.push_back(temp->data);
            if(temp->right) st.push(temp->right);
            if(temp->left) st.push(temp->left);
        }
        return ans;
    }
};