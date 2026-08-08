// Last updated: 9/8/2026, 12:37:50 am
class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int sum=0,add=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0 && nums[i]<10){
                sum+=nums[i];
            }
            else if(nums[i]>9 && nums[i]<100){
                add+=nums[i];
            }
        }
        if(sum>add || sum<add){
            return true;
        }
        return false;
    }
};