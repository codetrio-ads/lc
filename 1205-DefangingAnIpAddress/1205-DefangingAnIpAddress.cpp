// Last updated: 9/8/2026, 12:38:19 am
class Solution {
public:
    string defangIPaddr(string address) {
        string result="";
        for(char c : address){
            if(c=='.'){
                result+="[.]";
            }
            else
            result+=c;
        }
        return result;
    }
};