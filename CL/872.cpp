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
   void dfs(TreeNode* root, vector<int> &temp)
   {
        if(root == NULL)return;
        if(root -> left==NULL && root->right==NULL)
        {
            temp.push_back(root->val);
            return;
        }
        if(root->left!=NULL)
            dfs(root->left,temp);

        if(root->right!=NULL)
            dfs(root->right, temp);
        


   }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> leftLeaf;
        vector<int> rightLeaf;

        dfs(root1, leftLeaf);
        dfs(root2, rightLeaf);
        if(leftLeaf.size() != rightLeaf.size())
            return false;
        for(int i = 0; i < leftLeaf.size(); i++)
        {
            if(leftLeaf[i] != rightLeaf[i])
                return false;
        }
        return true;
    }
};