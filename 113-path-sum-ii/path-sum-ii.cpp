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
vector<vector<int>> result;
void dfs(TreeNode* root , int target , vector<int> &path){
    if(!root) return ;
    path.push_back(root->val);
    target = target - root->val;
    //when leaf node and sum match
    if(!root->left && !root->right && target ==0){
        result.push_back(path);
    }
    dfs(root->left , target ,path);
    dfs(root->right , target , path);
    path.pop_back(); //backtrack
}
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> path;
        dfs(root , targetSum , path);
        return result;
    }
};