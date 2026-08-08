// Last updated: 9/8/2026, 12:38:44 am
class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        string a;
        for(int i=0;i<s.size();i++){
            if((s[i]>='a' && s[i]<='z') ||(s[i]>='0' && s[i]<='9') ){
                a.push_back(s[i]);
            }
        }
        string r = a;
        reverse(a.begin(), a.end());
        if (a==r) {
        return true;
    }
    else 
    return false;
    }
};