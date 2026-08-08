// Last updated: 9/8/2026, 12:38:21 am
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for (int i = 0; i < (int)nums.size(); ++i) {
            nums[i] = nums[i] * nums[i]; 
        }
        sort(nums.begin(),nums.end());
        return nums;
    }
};