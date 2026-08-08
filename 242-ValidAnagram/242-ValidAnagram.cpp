// Last updated: 9/8/2026, 12:38:36 am
class Solution {
public:
bool isAnagram(string s, string t) {
unordered_map<char,int> mp1,mp2;
        int a=s.length();
        int b=t.length();
        if(a!=b){
            return false;
        }
        else if(a==b){
            for(int i=0;i<a;i++){
                mp1[s[i]]+=1;
                mp2[t[i]]+=1;
            }
            return mp1==mp2;
        }
        return false;
    }
};