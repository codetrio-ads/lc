// Last updated: 9/8/2026, 12:38:06 am
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int t=nums.size();
        vector<int> ans(2*t);
       for(int i=0;i<t;i++){
      
            ans[i]=nums[i];
        
       } 
       for(int i=0;i<t;i++){
   
            ans[t+i]=nums[i];
       }
       ans.resize(2*t);
        return ans;
    }
};