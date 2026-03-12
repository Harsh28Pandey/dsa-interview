// Problem - Rank transform of and array (1331) - LeetCode
// Time Complexity - O(n log n)
// Space Complexity - O(n)

class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> sortedArr = arr;       // Make a copy of original array
        sort(sortedArr.begin(), sortedArr.end());  // Sort the array
        
        map<int, int> rankMap;             // Map each value to its rank
        int rank = 1;
        for(int num : sortedArr) {
            if(rankMap.find(num) == rankMap.end()) {
                rankMap[num] = rank++;    // Assign rank only once per unique value
            }
        }
        
        vector<int> ranks(arr.size());
        for(size_t i = 0; i < arr.size(); i++) {
            ranks[i] = rankMap[arr[i]];   // Map original values to their rank
        }
        
        return ranks;
    }
};