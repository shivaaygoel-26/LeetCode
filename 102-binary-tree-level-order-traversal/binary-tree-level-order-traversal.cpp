class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if(root==nullptr) return result;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()) {
            vector<int> visited;
            int level=q.size();
            for(int i=0;i<level;i++) {
                TreeNode* curr=q.front();
                q.pop();
                visited.push_back(curr->val);
                if(curr->left!=nullptr) q.push(curr->left);
                if(curr->right!=nullptr) q.push(curr->right);
            }
            result.push_back(visited);
        }
        return result;
    }
};