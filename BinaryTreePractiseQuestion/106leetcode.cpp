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

    TreeNode *solve(vector<int>& inorder, vector<int>& postorder, int &index, int inOrderStart, int inOrderEnd, int n ,map<int,int>& nodeToIndex) {
        // base case
        if (index >= n || inOrderStart > inOrderEnd) return NULL;
      
        int element = postorder[index--];
        TreeNode* root = new TreeNode (element);
        int position = nodeToIndex[element];

         root->right = solve(inorder, postorder, index, position +1 , inOrderEnd, n , nodeToIndex );
        root->left = solve(inorder, postorder, index, inOrderStart , position-1, n , nodeToIndex );
       

        return root;
        
    }
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n = inorder.size();
        map<int , int > nodeToIndex ;
        for(int i=0; i<n ; i++){
            nodeToIndex[inorder[i]]= i;
        }
        int index =n-1; 
        TreeNode* ans = solve(inorder, postorder, index, 0 , n-1 , n , nodeToIndex );
        return ans;

    }
};