/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *int val;
 *TreeNode * left;
 *TreeNode * right;
 *TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *};
 */
class Solution
{
    public:
        void inorder(TreeNode *root, vector<int> &ans)
        {
            if (root == NULL)
                return;
            inorder(root->left, ans);
            if (root->left == NULL && root->right == NULL)
                ans.push_back(root->val);
            inorder(root->right, ans);
        }
    bool leafSimilar(TreeNode *root1, TreeNode *root2)
    {
        vector<int> ans, ans1;
        inorder(root1, ans);
        inorder(root2, ans1);
        if (ans == ans1)
            return true;
        return false;
    }
};