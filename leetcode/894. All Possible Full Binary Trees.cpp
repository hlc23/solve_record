#include<bits/stdc++.h>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
class Solution {
public:
    vector<TreeNode*> ans;  
    unordered_map<int, vector<TreeNode*>> table;
    vector<TreeNode*> createTree(int n){
        if (table.find(n) != table.end()){
            return table[n];
        }
        vector<TreeNode*> temp;
        for (int i = 1; i < n; i+=2){
            vector<TreeNode*> left = createTree(i);
            vector<TreeNode*> right = createTree(n-i-1);
            for (auto l: left){
                for (auto r: right){
                    TreeNode* root = new TreeNode(0, l, r);
                    temp.push_back(root);
                }
            }
        }
        table.insert({n, temp});
        return temp;
    }

    vector<TreeNode*> allPossibleFBT(int n) {
        if (!(n%2)) return {};
        if (n == 1) return {new TreeNode()};
        vector<TreeNode*> temp = {new TreeNode()};
        table.insert({1, temp});
        return createTree(n);
    }
};