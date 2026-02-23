// Problem - Check if a string contains all binary codes of size k (1461) - LeetCode
// Time Complexity - O(n * k)
// Space Complexity - O(2 ^ k * k)

class Solution {
public:
    bool hasAllCodes(string s, int k) {
        int n = s.size();
        int totalCodes = pow(2,k);
        if(n - k + 1 < totalCodes) {
            return false;
        }

        unordered_set<string> st;
        for(int i = 0; i <= n - k; i++) {
            string sub = s.substr(i,k);
            st.insert(sub);

            if(st.size() == totalCodes) {
                return true;
            }
        }
        return false;
    }
};