// Last updated: 9/8/2026, 12:38:53 am
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> x;
        int a=0;
        int b=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]+nums[j]==target){
                    return {i,j};
                }
            }
        }
        return {0,0};
    }
};