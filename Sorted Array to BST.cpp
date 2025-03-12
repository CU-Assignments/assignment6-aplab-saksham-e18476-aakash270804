
class Solution {
private:
    TreeNode* convertBST(int left, int right, vector<int>& arr)
    {
        if(left > right)
        {
            return nullptr;
        }
 
        int mid = left + ((right - left) / 2);
        TreeNode* root = new TreeNode(arr[mid]);
  
        root -> left = convertBST(left, mid - 1, arr);
        root -> right = convertBST(mid + 1, right, arr);
        return root;
    }
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int size = nums.size() - 1;
        return convertBST(0, size, nums);
    }
};
