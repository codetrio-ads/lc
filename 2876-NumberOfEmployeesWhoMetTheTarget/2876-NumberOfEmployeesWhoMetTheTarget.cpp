// Last updated: 9/8/2026, 12:37:58 am
class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int count=0;
        for(int i=0;i<hours.size();i++){
            if(hours[i]>=target){
                count++;
            }
        }
        return count;
    }
};