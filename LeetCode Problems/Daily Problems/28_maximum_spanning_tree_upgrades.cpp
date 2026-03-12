// Problem - Maximum spanning tree stability upgrades (3600) - LeetCode
// Time Complexity - O(E log M)
// Space Complexity - O(N + E)

class Solution {
public:

    struct DSU {
        vector<int> parent, rankv;
        int comp;

        DSU(int n) {
            parent.resize(n);
            rankv.resize(n,0);
            comp = n;
            for(int i=0;i<n;i++) parent[i]=i;
        }

        int find(int x){
            if(parent[x]==x) return x;
            return parent[x]=find(parent[x]);
        }

        bool unite(int a,int b){
            a=find(a); b=find(b);
            if(a==b) return false;

            if(rankv[a] < rankv[b]) swap(a,b);
            parent[b]=a;

            if(rankv[a]==rankv[b]) rankv[a]++;
            comp--;
            return true;
        }
    };

    bool can(int n, vector<vector<int>>& edges, int k, int X){
        DSU dsu(n);
        int upgrades = 0;

        // process mandatory edges
        for(auto &e: edges){
            int u=e[0], v=e[1], s=e[2], must=e[3];

            if(must==1){
                if(s < X) return false;
                if(!dsu.unite(u,v)) return false; // cycle
            }
        }

        vector<pair<int,int>> normal;
        vector<pair<int,int>> upgrade;

        // optional edges
        for(auto &e: edges){
            int u=e[0], v=e[1], s=e[2], must=e[3];

            if(must==1) continue;

            if(s >= X) normal.push_back({u,v});
            else if(2*s >= X) upgrade.push_back({u,v});
        }

        // use normal edges
        for(auto &e: normal){
            dsu.unite(e.first, e.second);
        }

        // use upgrade edges
        for(auto &e: upgrade){
            if(dsu.find(e.first)!=dsu.find(e.second)){
                dsu.unite(e.first, e.second);
                upgrades++;
                if(upgrades > k) return false;
            }
        }

        return dsu.comp == 1;
    }

    int maxStability(int n, vector<vector<int>>& edges, int k) {
        int left = 1, right = 200000;
        int ans = -1;

        while(left <= right){
            int mid = (left + right) / 2;

            if(can(n, edges, k, mid)){
                ans = mid;
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return ans;
    }
};