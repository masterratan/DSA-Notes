// BFS in Tree = Level Order Traversal

// BFS
queue<TreeNode*> q;
q.push(root);
int currLevel = 1;
while(!q.empty()){
   TreeNode *temp = q.front();
   q.pop();
   // work with temp->val
   if(temp->left) q.push(temp->left);
   if(temp->right) q.push(temp->right);
}

// Code2: BFS
// when we need to do something at each level
while(!q.empty()){
    int n = q.size(); 
    while(n--){
        TreeNode *temp = q.front();
        q.pop();
        // work with temp->val
        if(temp->left) q.push(temp->left);
        if(temp->right) q.push(temp->right);
    }
}
