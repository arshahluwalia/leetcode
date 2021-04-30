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
    bool isSymmetric(TreeNode *root) {
        return helper(root->left, root->right);                                              // calls helper function for root node's subtrees
    }
    
    bool helper(TreeNode* left, TreeNode* right) {
        if (!left && !right) {                                                               // if both nodes are null (tree is symmterical)
            return true;
        } else if (!left || !right) {                                                        // if one node is null, while the other isn't (tree is not symmetrical)
            return false;
        }
        
        if (left->val != right->val) {                                                       // if both nodes don't have the same value (tree is not symmetrical)
            return false;
        }
        
        return helper(left->left,right->right) && helper(left->right, right->left);          // recursively calls helper function for each node's subtrees
    }
};
