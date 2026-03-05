// Problem - Minimum changes to make alternating binary string (1758) - LeetCode
// Time Complexity - O(n)
// Space Complexity - O(1)

class Solution {
public:
    int minOperations(string s) {
        int n = s.length();
        int count1 = 0, count2 = 0;
        
        for(int i = 0; i < n; i++) {
            if(s[i] != (i % 2 == 0 ? '0' : '1')) count1++;
            if(s[i] != (i % 2 == 0 ? '1' : '0')) count2++;
        }
        
        return min(count1, count2);
    }
};