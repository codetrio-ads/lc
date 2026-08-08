// Last updated: 9/8/2026, 12:38:12 am
class Solution {
public:
    int xorOperation(int n, int start) {
        int xr=0,nums[1000];
        for(int i=0;i<n;i++){
            nums[i]=start+2*i;
        }
        
        for(int j=0;j<n;j++){
            xr^=nums[j];
        }
        return xr;
    }
};