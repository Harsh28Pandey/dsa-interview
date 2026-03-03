// Problem - find the kth bit in the n-th binary string
// Time Complexity - O(n)
// Space Complexity - O(n)

class Solution {
public:
    char findKthBit(int n, int k) {
        if (n == 1)
            return '0';

        int len = pow(2, n) - 1;
        int mid = (len / 2) + 1;

        if (k == mid)
            return '1';
        else if (k < mid)
            return findKthBit(n - 1, k);
        else {
            int mirrored = len - k + 1;
            char bit = findKthBit(n - 1, mirrored);
            return (bit == '0') ? '1' : '0';
        }
    }
};