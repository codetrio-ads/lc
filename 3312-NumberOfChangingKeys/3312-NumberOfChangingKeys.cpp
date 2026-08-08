// Last updated: 9/8/2026, 12:37:55 am
class Solution {
public:
    int countKeyChanges(string s) {
        int count = 0;

        for (int i = 1; i < s.size(); i++) {
            if (tolower(s[i]) != tolower(s[i - 1])) {
                count++;
            }
        }

        return count;
    }
};
