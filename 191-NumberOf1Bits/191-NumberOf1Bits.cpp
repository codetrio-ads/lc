// Last updated: 9/8/2026, 12:38:43 am
class Solution {
public:
    int hammingWeight(int n) {
        int count=0;
        string bin=bitset<32>(n).to_string();
        for(int i=0;i<bin.size();i++){
            if(bin[i]=='1'){
                count++;
            }
        }
        return count;
    }
};