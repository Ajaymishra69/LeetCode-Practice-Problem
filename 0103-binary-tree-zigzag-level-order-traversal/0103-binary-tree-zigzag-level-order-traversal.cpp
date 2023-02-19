/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *    int val;
 *    TreeNode * left;
 *    TreeNode * right;
 *    TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *};
 */
class Solution
{
    public:
        vector<vector < int>> zigzagLevelOrder(TreeNode *root)
        {
            vector<vector < int>> res;
            queue<TreeNode*> q;
            if (root == NULL)
                return res;
            q.push(root);
            int flag = 0;
            while (q.size())
            {
                vector<int> temp;
                int n = q.size();
                while (n--)
                {
                    TreeNode *t = q.front();
                    q.pop();
                    if (t->left != NULL)
                    {
                        q.push(t->left);
                    }
                    if (t->right != NULL)
                    {
                        q.push(t->right);
                    }
                    temp.push_back(t->val);
                }
                if (flag == 0)
                {
                    flag = 1;
                    res.push_back(temp);
                }
                else
                {
                    reverse(temp.begin(), temp.end());
                    res.push_back(temp);
                    flag = 0;
                }
            }
            return res;
        }
};