class Solution {
public:
	// Iterative Inorder
	vector<int> inorder(TreeNode* root){
		vector<int> ans;
		stack<TreeNode*> st;
		st.push(root);
		while(curr && !st.empty()){
			while(curr){
				st.push(curr);
				curr = curr->left;
			}
			curr = st.top();
			st.pop();
			ans.push_back(curr->data);
			curr = curr->right;
		}
		return ans;
	}
};
