class Solution {
public:
    bool isCompleteTree(TreeNode* root) {
        if(root==nullptr) return true;

        queue<TreeNode*>q;
        TreeNode *curr;
        q.push(root);
        bool flag=false;

        while(!q.empty()){
            curr=q.front();
            q.pop();

            if(curr==nullptr){
                flag=true;
            }
            else{
                if(flag) return false;

                q.push(curr->left);
                q.push(curr->right);
            }
        }
        return true;
    }
};