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
    int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode*,unsigned long>>q;
        q.push({root,0});
        int maxW=0;
        while(!q.empty()){
            int currL=q.size();
            unsigned long stIdx=q.front().second;
            unsigned long endIdx=q.back().second;
            maxW=max(maxW,int(endIdx-stIdx+1));
            for(int i=0;i<currL;i++){
                 auto curr=q.front();
                 q.pop();
                if(curr.first->left) q.push({curr.first->left,curr.second*2+1});
                if(curr.first->right) q.push({curr.first->right,curr.second*2+2});
                
            }
        }
        return maxW;
        
    }
};