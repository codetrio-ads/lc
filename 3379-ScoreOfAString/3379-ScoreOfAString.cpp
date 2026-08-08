// Last updated: 9/8/2026, 12:37:54 am
class Solution {
public:
    int scoreOfString(string s) {
        int adj=0,sum=0;
            for(int j=0;j<s.size()-1;j++){
                adj=(int)s[j]-(int)s[j+1];
                sum+=abs(adj);
            }
        return sum;
    }
};