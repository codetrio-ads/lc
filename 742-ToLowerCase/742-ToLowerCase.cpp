// Last updated: 9/8/2026, 12:38:25 am
class Solution {
public:
    string toLowerCase(string s) {
        for(int i=0;i<s.size();i++){
            if(s[i]>='A' && s[i]<='Z'){
                s[i]=s[i]+32;
            }
            
        }
        return s;
    }
};