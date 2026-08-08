// Last updated: 9/8/2026, 12:38:46 am
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> a;
        int c=1;
        for(int i=0;i<numRows;i++){
            a.push_back(vector<int>(i + 1));
            for(int j=0;j<=i;j++){
                if (j == 0 || j == i) {
                    a[i][j] = 1;
                } else {
                    a[i][j] = a[i-1][j-1] + a[i-1][j];
                }
            }
        }
        return a;
    }
};