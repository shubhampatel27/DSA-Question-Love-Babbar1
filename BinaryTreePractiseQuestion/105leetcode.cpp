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
TreeNode *solve(vector<int>& inorder, vector<int>& preorder, int &index, int inOrderStart, int inOrderEnd, int n ,map<int,int>& nodeToIndex) {
        // base case
        if (index >= n || inOrderStart > inOrderEnd) return NULL;
      
        int element = preorder[index++];
        TreeNode* root = new TreeNode (element);
        int position = nodeToIndex[element];
        
         root->left = solve(inorder, preorder, index, inOrderStart , position-1, n , nodeToIndex );
         root->right = solve(inorder, preorder, index, position +1 , inOrderEnd, n , nodeToIndex );
        
       

        return root;
        
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n = inorder.size();
        map<int , int > nodeToIndex ;
        for(int i=0; i<n ; i++){
            nodeToIndex[inorder[i]]= i;
        }
        int index =0; 
        TreeNode* ans = solve(inorder, preorder, index, 0 , n-1 , n , nodeToIndex );
        return ans;
    }
};