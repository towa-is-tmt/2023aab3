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
    int helper(TreeNode* root) {
        if (root == nullptr) return INT_MAX;
        if (root->left == nullptr && root->right == nullptr) return 1; // 終止條件，已到最底部的葉子，這裡有點 terminal condition

        int ans1 = helper(root->left);
        int ans2 = helper(root->right);
        return min(ans1, ans2) + 1;
    }

    int minDepth(TreeNode* root) {
        int ans = helper(root);
        if (ans == INT_MAX) return 0;
        return ans;
    }
};
