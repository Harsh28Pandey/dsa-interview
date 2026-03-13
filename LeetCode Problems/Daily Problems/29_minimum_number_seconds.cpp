// Problem - Minimum number of seconds to make mountain height zero (3296) - LeetCode
// Time Complexity - O(W log T)
// Space Complexity - O(1)

class Solution {
public:
    long long maxHeight(long long T, vector<int>& workerTimes) {
        long long total = 0;

        for (long long t : workerTimes) {
            long long val = (2 * T) / t;
            long long x = (sqrt(1 + 4 * val) - 1) / 2;
            total += x;
        }

        return total;
    }

    long long minNumberOfSeconds(int mountainHeight, vector<int>& workerTimes) {
        long long left = 0;
        long long right = 1e18;
        long long ans = right;

        while (left <= right) {
            long long mid = left + (right - left) / 2;

            if (maxHeight(mid, workerTimes) >= mountainHeight) {
                ans = mid;
                right = mid - 1;
            } 
            else {
                left = mid + 1;
            }
        }

        return ans;
    }
};