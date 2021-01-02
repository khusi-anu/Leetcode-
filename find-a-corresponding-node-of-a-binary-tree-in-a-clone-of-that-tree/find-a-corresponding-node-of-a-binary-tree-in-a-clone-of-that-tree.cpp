/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
​
class Solution {
public:
    
    void Traversal(TreeNode* original, TreeNode* cloned, TreeNode* target, TreeNode*& ans)
    {
        if(original == NULL)
            return;
        
        if(original == target)
        {
            ans = cloned;
            return;
        }
        
        Traversal(original->left, cloned->left, target, ans);
        Traversal(original->right, cloned->right, target, ans);
    }
    
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        
        TreeNode* ans = new TreeNode(0);
        Traversal(original, cloned, target, ans);
        
        if(ans->val == 0)
            return NULL;
        
        return ans;
        
    }
};
