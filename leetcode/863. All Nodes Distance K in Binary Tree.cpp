#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
private:
    const int MAX_NODES = 500;
public:

    vector<vector<int>> table = vector<vector<int>>(MAX_NODES, vector<int>());
    void dfs(TreeNode *node){
        if (node == NULL) return;
        if (node->left != NULL) {
            table[node->val].push_back(node->left->val);
            table[node->left->val].push_back(node->val);
            dfs(node->left);
        }
        if (node->right != NULL) {
            table[node->val].push_back(node->right->val);
            table[node->right->val].push_back(node->val);
            dfs(node->right);
        }
    }

    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        dfs(root);
        vector<int> ans;
        queue<pair<int, int>> q;
        vector<bool> visited(MAX_NODES, false);
        q.push(make_pair(target->val, 0));
        visited[target->val] = true;

        while (!q.empty()){
            int node = q.front().first;
            int dis = q.front().second;
            q.pop();
            if (dis == k){
                ans.push_back(node);
                continue;
            }
            for (int i = 0; i < table[node].size(); i++){
                int next = table[node][i];
                if (!visited[next]){
                    visited[next] = true;
                    q.push(make_pair(next, dis + 1));
                }
            }
        }
        return ans;
    }
};