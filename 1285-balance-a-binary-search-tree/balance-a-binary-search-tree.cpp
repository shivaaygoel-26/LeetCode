/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    unordered_map<TreeNode*, int> h;

    int height(TreeNode* root) {
        return root ? h[root] : 0;
    }

    int getBalance(TreeNode* root) {
        if (!root) return 0;
        return height(root->left) - height(root->right);
    }

    TreeNode* rightRotate(TreeNode* y) {
        TreeNode* x = y->left;
        TreeNode* t = x->right;

        x->right = y;
        y->left = t;

        h[y] = 1 + max(height(y->left), height(y->right));
        h[x] = 1 + max(height(x->left), height(x->right));

        return x;
    }

    TreeNode* leftRotate(TreeNode* x) {
        TreeNode* y = x->right;
        TreeNode* t = y->left;

        y->left = x;
        x->right = t;

        h[x] = 1 + max(height(x->left), height(x->right));
        h[y] = 1 + max(height(y->left), height(y->right));

        return y;
    }

    TreeNode* insert(TreeNode* root, TreeNode* node) {
        if (!root) {
            h[node] = 1;
            return node;
        }

        if (node->val < root->val)
            root->left = insert(root->left, node);
        else
            root->right = insert(root->right, node);

        h[root] = 1 + max(height(root->left), height(root->right));

        int b = getBalance(root);

        if (b > 1 && node->val < root->left->val)
            return rightRotate(root);

        if (b < -1 && node->val > root->right->val)
            return leftRotate(root);

        if (b > 1 && node->val > root->left->val) {
            root->left = leftRotate(root->left);
            return rightRotate(root);
        }

        if (b < -1 && node->val < root->right->val) {
            root->right = rightRotate(root->right);
            return leftRotate(root);
        }

        return root;
    }

    vector<TreeNode*> v;

    void inorder(TreeNode* root) {
        if (!root) return;

        inorder(root->left);
        v.push_back(new TreeNode(root->val));
        inorder(root->right);
    }

    TreeNode* balanceBST(TreeNode* root) {
        inorder(root);

        TreeNode* ans = NULL;

        for (auto node : v)
            ans = insert(ans, node);

        return ans;
    }
};
