// Problem - Sort integers by number of 1 bits (1356) - LeetCode
// Time Complexity - O(n log n)
// Space Complexity - O(n)

class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int,int>> temp;
        for(int num : arr) {
            temp.push_back({__builtin_popcount(num),num});
        }
        sort(temp.begin(),temp.end());
        for(int i = 0; i < arr.size(); i++) {
            arr[i] = temp[i].second;
        }
        return arr;
    }
};