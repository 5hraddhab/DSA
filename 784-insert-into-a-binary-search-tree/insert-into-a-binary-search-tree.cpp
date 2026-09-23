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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode *current=root;
        TreeNode *prev=root;
        if(root==nullptr)
        {
            return new TreeNode(val);
        }
        while(current!=nullptr)
        {
            if(current->val>val)
            {
                prev=current;
                current=current->left;
            }
            else
            {
                prev=current;
                current=current->right;
            }
        }
        if(prev->val>val)
        {
            prev->left=new TreeNode(val);
        }
        else
        {
            prev->right=new TreeNode(val);
        }
        return root;
    }
};