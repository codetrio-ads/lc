// Last updated: 9/8/2026, 12:38:26 am
class Solution {
public:
    int calPoints(vector<string>& operations) {
    vector<int> arr;

        for (int i = 0; i < operations.size(); i++) {

            if (operations[i] == "+") {
                int a = arr[arr.size() - 1];
                int b = arr[arr.size() - 2];
                arr.push_back(a + b);
            }

            else if (operations[i] == "C") {
                arr.pop_back();
            }

            else if (operations[i] == "D") {
                int last = arr.back();
                arr.push_back(last * 2);
            }

            else {
                arr.push_back(stoi(operations[i]));
            }
        }

        int sum = 0;
        for (int x : arr) {
            sum += x;
        }

        return sum;
    }

};