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
    TreeNode* buildTree(int left,int right,vector<int>& nums){
        if(left>right)
            return NULL;
        int mid = left+(right-left)/2;
        TreeNode* node = new TreeNode(nums[mid]);
        node->left = buildTree(left,mid-1,nums);
        node->right = buildTree(mid+1,right,nums);
        return node;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n = nums.size()-1;
        return buildTree(0,n,nums);
    }
};