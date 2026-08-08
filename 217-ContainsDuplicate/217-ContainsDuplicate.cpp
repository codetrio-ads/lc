// Last updated: 9/8/2026, 12:38:40 am
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;
        int n= nums.size();
        int ans=1;
        for(int i=0;i<n;i++){
           if(mp.count(nums[i])==0){
            mp[nums[i]]+=1;
           }
           else{
            return true;
           }
        }
        return false;
    } 
};