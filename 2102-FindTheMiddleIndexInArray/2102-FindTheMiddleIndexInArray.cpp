// Last updated: 9/8/2026, 12:38:05 am
class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int total=0;
        int leftsum=0;
        for(int dig : nums){
            total+=dig;
        }
        for (int i = 0; i < nums.size(); i++) {
        int rightsum = total - leftsum - nums[i];

        if (leftsum == rightsum) {
            return i;
        }

        leftsum += nums[i];
    }
    return -1;
    }
};