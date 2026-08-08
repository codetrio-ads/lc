// Last updated: 9/8/2026, 12:38:14 am
class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
    int n=groupSizes.size();
    vector<vector<int>> buckets(n + 1);
    vector<vector<int>> result;
    for (int i=0;i<n;i++){
        int size=groupSizes[i];
        buckets[size].push_back(i);
        if (buckets[size].size() == size) {
        result.push_back(buckets[size]);
        buckets[size].clear();
        }
    }
    return result;
    }
};