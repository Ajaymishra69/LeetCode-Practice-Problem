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
     void inorder(TreeNode* root1,vector<int>&v1){
         if(root1==NULL)
         {
             return;
         }
         inorder(root1->left,v1);
         v1.push_back(root1->val);
         inorder(root1->right,v1);
     }
    
    // void inorder2(TreeNode* root2,vector<int>&v1){
    //      if(root2==NULL)
    //      {
    //          return;
    //      }
    //      inorder(root2->left,v1);
    //      v1.push_back(root2->val);
    //      inorder(root2->right,v1);
    //  }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int>v1;
        inorder(root1,v1);
        inorder(root2,v1);
        sort(v1.begin(),v1.end());
        return v1;
        
    }
};