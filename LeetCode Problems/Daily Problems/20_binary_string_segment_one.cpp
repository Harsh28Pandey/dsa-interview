// Problem - Check if binary string has at most one segment of ones (1784) - LeetCode
// Time Complexity - O(n)
// Space Complexity - O(1)

class Solution {
public:
    bool checkOnesSegment(const string &s) {
    bool inSegment = false;
    int segments = 0;
    for (char c : s) {
        if (c == '1') {
            if (!inSegment) {
                inSegment = true;
                segments++;
                if (segments > 1) return false;
            }
        } else {
            inSegment = false;
        }
    }
    return true;
}
};