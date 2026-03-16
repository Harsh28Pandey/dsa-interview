// Problem - Get biggest three rhombus sums in a grid (1878) - LeetCode

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> getBiggestThree(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        set<int> st;

        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {

                // size 0 rhombus
                st.insert(grid[i][j]);
                if(st.size() > 3) st.erase(st.begin());

                for(int k = 1; ; k++) {

                    if(i-k < 0 || i+k >= m || j-k < 0 || j+k >= n)
                        break;

                    int sum = 0;

                    // top -> right
                    for(int t=0; t<k; t++)
                        sum += grid[i-k+t][j+t];

                    // right -> bottom
                    for(int t=0; t<k; t++)
                        sum += grid[i+t][j+k-t];

                    // bottom -> left
                    for(int t=0; t<k; t++)
                        sum += grid[i+k-t][j-t];

                    // left -> top
                    for(int t=0; t<k; t++)
                        sum += grid[i-t][j-k+t];

                    st.insert(sum);
                    if(st.size() > 3)
                        st.erase(st.begin());
                }
            }
        }

        vector<int> ans(st.begin(), st.end());
        reverse(ans.begin(), ans.end());
        return ans;
    }
};