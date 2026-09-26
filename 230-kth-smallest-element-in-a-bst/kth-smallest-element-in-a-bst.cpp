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
     void inorder(TreeNode *root,int &result,int &cnt,int k)
     {
        if(root==nullptr)
        {
            return;
        }
       
        inorder(root->left,result,cnt,k);
        cnt++;
        if(cnt==k)
        {
            result=root->val;
            return;
        }
        inorder(root->right,result,cnt,k);

     }
     
    int kthSmallest(TreeNode* root, int k) {
       int result=0;
       int cnt=0;
        inorder(root,result,cnt,k);
        return result;
    }
};