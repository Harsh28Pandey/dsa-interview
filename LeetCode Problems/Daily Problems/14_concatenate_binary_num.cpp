// Problem - Concatenate of consecutive binary numbers (1680) - LeetCode
// Time Complexity - O(n)
// Space Complexity - O(1)

class Solution {
public:
    int concatenatedBinary(int n) {
        const int MOD = 1e9 + 7;
        long long ans = 0;
        int bitLength = 0;
        long long nextPowerOf2 = 1;
        long long currentPower = 1; 

        for (int i = 1; i <= n; i++) {
            
            if (i == nextPowerOf2) {
                bitLength++;
                nextPowerOf2 *= 2;
                currentPower = (currentPower * 2) % MOD;
            }

            ans = (ans * currentPower + i) % MOD;
        }

        return ans;
    }
};