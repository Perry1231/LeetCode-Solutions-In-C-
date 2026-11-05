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
TreeNode* sortedArrayToBSTHelper(const std::vector<int>& nums, int left, int right) {
    if (left > right) {
            return nullptr;
    }
    int ser = left + (right - left) / 2;
       
        TreeNode* root = new TreeNode(nums[ser]);
       
            root->left = sortedArrayToBSTHelper(nums, left, ser - 1);
            root->right = sortedArrayToBSTHelper(nums, ser + 1, right);
            
        
        return root;
}

    TreeNode* sortedArrayToBST(vector<int>& nums) {

        return sortedArrayToBSTHelper(nums, 0, nums.size() - 1);
    }
};