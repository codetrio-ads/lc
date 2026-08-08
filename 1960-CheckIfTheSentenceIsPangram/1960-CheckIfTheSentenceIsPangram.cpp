// Last updated: 9/8/2026, 12:38:08 am
class Solution {
public:
    bool checkIfPangram(string sentence) {
        bool arr[26] = {false};
        for(char ch : sentence){
            arr[ch - 'a'] = true;
        }
        for (int i = 0; i < 26; i++) {
        if (!arr[i]) {
            return false;
        }
    }
    return true;
    }
};