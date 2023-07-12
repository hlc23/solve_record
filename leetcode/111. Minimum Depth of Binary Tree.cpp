struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution{
public:

    int dfs(TreeNode *node){
        if (node == nullptr) return 0;
        if (node->left == nullptr && node->right == nullptr) return 1;
        if (node->left == nullptr) return dfs(node->right) + 1;
        if (node->right == nullptr) return dfs(node->left) + 1;
        return min(dfs(node->left), dfs(node->right)) + 1;
    }

    int minDepth(TreeNode *root){
        return dfs(root);
    }
};