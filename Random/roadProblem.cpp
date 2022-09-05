#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    int solve(vector<int>& costs_from, vector<int>& costs_to, vector<vector<int>>& g) {
        int n = costs_from.size();
        int ret = 0;
        map<int, vector<int>> edges;
        map<int, vector<int>> redges;
        for (auto& it : g) {
            edges[it[0]].push_back(it[1]);
            redges[it[1]].push_back(it[0]);
        }
        int from_cost = INT_MAX;
        set<int> visited;
        set<int> reachable;
        queue<int> q;
        reachable.insert(0);
        q.push(0);
        while (!q.empty()) {
            int node = q.front();
            q.pop();
            for (int i : edges[node]) {
                if (!reachable.count(i)) {
                    reachable.insert(i);
                    q.push(i);
                }
            }
            from_cost = min(from_cost, costs_from[node]);
        }
        int global_min = *min_element(costs_from.begin(), costs_from.end());
        ret += from_cost - global_min;
        vector<int> po;
        function<void(int)> dfs;
        dfs = [&](int i) {
            if (!visited.count(i) && !reachable.count(i)) {
                visited.insert(i);
                for (int j : edges[i]) {
                    dfs(j);
                }
                po.push_back(i);
            }
        };
        for (int i = 0; i < n; i++) dfs(i);
        reverse(po.begin(), po.end());
        function<bool(int)> dfs2;
        dfs2 = [&](int i) {
            if (visited.count(i)) return true;
            if (reachable.count(i)) return false;
            visited.insert(i);
            reachable.insert(i);
            bool ret = true;
            for (int j : redges[i]) {
                ret &= dfs2(j);
            }
            return ret;
        };
        for (int i : po) {
            if (reachable.count(i)) continue;
            visited.clear();
            bool initial = dfs2(i);
            if (initial) {
                int best = INT_MAX;
                for (int j : visited) {
                    best = min(best, costs_to[j]);
                }
                ret += global_min + best;
            }
        }
        return ret;
    }
};

int solve(vector<int>& costs_from, vector<int>& costs_to, vector<vector<int>>& edges) {
    return (new Solution())->solve(costs_from, costs_to, edges);
}

int main(){
    vector<int> costs_from = {6, 2, 2, 12};
    vector<int> costs_to = {2, 2, 3, 2};
    vector<vector<int>> edges = {{0, 3}};
    cout << solve(costs_from, costs_to, edges);
}