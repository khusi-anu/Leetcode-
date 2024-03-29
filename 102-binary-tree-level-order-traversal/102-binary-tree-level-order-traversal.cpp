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
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        
      vector<vector<int>> answer;
        if(!root) return answer;  
        queue<TreeNode*> q; 
        q.push(root);  
        while(!q.empty())  
        {
            int size=q.size();  
            vector<int> v;  
            while(size--)  
            {
                TreeNode* temp=q.front();  
                q.pop();
                v.push_back(temp->val);  
                if(temp->left) q.push(temp->left);  //if left subtree exist for temp then store it into the queue
                if(temp->right) q.push(temp->right);  //if right subtree exist for temp then store it into the queue
            }
            answer.push_back(v); 
        }
        return answer; 
    
    }
};