// Last updated: 9/8/2026, 12:38:02 am
class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        int ls=0,rs=0;
        vector<int> leftsum(n);
        vector<int> rightsum(n);
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            if(i==0){
                leftsum[i]+=0;
            }
            else{
                leftsum[i]=leftsum[i-1]+nums[i-1];
            }
        }
        for(int j=n-1;j>=0;j--){
            if(j==n-1){
                rightsum[j]+=0;
            }
            else{
                rightsum[j]=rightsum[j+1]+nums[j+1];
            }
        }
        for (int m=0;m<n;m++){
            ans[m]=abs(rightsum[m]-leftsum[m]);
        }
        return ans;
    }
};