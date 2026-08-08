// Last updated: 9/8/2026, 12:38:32 am
class Solution {
public:
    int firstUniqChar(string s) {
        for(int i=0;i<s.size();i++){
            int count=0;
            for(int j = 0; j < s.size(); j++){
                if(i != j && s[i] == s[j]){
                    count=-1;
                    break;
                 }
                 else{
                    count=i;
                 }
            }
            if(count!=-1){
                return count;
            }
        }
        return -1;
    }

};