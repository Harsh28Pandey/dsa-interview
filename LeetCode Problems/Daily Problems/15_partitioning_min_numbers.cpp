// Problem - Partitioning into minimum number decimal binary numbers (1689) - LeetCode
// Time Complexity - O(n)
// Space Complexity - O(1)

class Solution {
public:
    int minPartitions(string n) {
        int maxDigit = 0;
        for(char c : n) {
            maxDigit = max(maxDigit,c - '0');
        }
        return maxDigit;
    }
};