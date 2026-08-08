// Last updated: 9/8/2026, 12:38:09 am
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int t=accounts.size();
        vector<int> rowsum(t);
        for(int i=0;i<t;i++){
            int sum=0;
            for(int j=0;j<accounts[i].size();j++){
                sum+=accounts[i][j];
            }
            rowsum[i]=sum;
        }
        int maxno=rowsum[0];
        for(int i=1;i<t;i++){
            if (rowsum[i]>maxno){
                maxno=rowsum[i];
            }
        }
        return maxno;
    }
};