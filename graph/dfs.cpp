using namespace std;
#include <iostream>
#include <stack>
#include <vector>

void dfs(long x, long n, vector<long> g[])
{
    bool vis[n] = { 0 };
    stack<long> s;
    long a, b, i;
    s.push_back(x);
    while (!s.empty()) {
        a = s.top();
        vis[a] = 1;
        b = g[a].size();
        for (i = 0; i < b; i++) {
            if (!vis[g[a][i]]) {
                s.push_back(g[a][i]);
            }
        }
    }
}
