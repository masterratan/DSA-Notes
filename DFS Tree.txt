// Inorder DFS
// Similarly Preorder & Postorder can be too done

void DFS(TreeNode *root, int level){
        if(!root) return;
        DFS(root->left, level+1);
        // work with root->val
        DFS(root->right, level+1);
    }