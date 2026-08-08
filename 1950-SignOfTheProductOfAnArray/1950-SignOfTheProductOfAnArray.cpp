// Last updated: 9/8/2026, 12:38:10 am
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int product=1,r;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                return 0;
            }
            if(nums[i]<0){
                product*=-1;
            }
        }
        if(product>0){
            return 1;
        }
        else if(product<0){
            return -1;
        }
        return 0;
    }
};