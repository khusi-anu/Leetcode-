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
    
        map<int,vector<int>> mp;                          
        
        void solution(TreeNode *root){                
            
            queue<pair<int,TreeNode*>> q; 
            q.push(make_pair(0,root)); 
           // mp[0].push_back(root->val);
            
            while(!q.empty()){
            
                int n = q.size();
                vector<pair<int,int>>a;

                for(int i=0;i<n;i++){
                    
                    pair<int, TreeNode*> p = q.front();
                    q.pop();
                    a.push_back({p.second->val,p.first});

                    if(p.second->left)
                    {
                        q.push(make_pair(p.first-1, p.second->left));
                       // mp[p.first-1].push_back(p.second->left->val);
                    }
                    if(p.second->right)
                    {
                        q.push(make_pair(p.first+1, p.second->right));
                        //mp[p.first+1].push_back(p.second->right->val);
                    }
                }
                    sort(a.begin(),a.end());
                    for(int i=0;i<a.size();i++)
                        mp[a[i].second].push_back(a[i].first);
                
            }
            
        }
    
    
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        
        vector<vector<int>> vec;
        
        if(!root)
            return vec;
        
        solution(root);
        
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            vector<int> temp = it->second;
            vec.push_back(temp);
        }
        return vec;
    
    }
};