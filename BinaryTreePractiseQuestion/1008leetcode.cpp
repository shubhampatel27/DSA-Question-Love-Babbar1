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
     TreeNode* solve(vector<int> &pre,int low,int high,int &index)
    {
    if(index>=pre.size())
        return NULL;
    if(pre[index]<low || pre[index]>high)
        return NULL;
    TreeNode* root=new TreeNode(pre[index++]);
        root->left=solve(pre,low,root->val,index);
        root->right=solve(pre,root->val,high,index);
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int index =0;
        TreeNode* ans = solve(preorder , INT_MIN , INT_MAX , index);
        return ans;
    }
};