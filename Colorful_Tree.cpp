#include <iostream>
#include <vector>
#include <bitset>
#include <algorithm>

using namespace std;

const int MAXN = 500005;
vector<int> adj[MAXN];
bitset<MAXN> color;
int depth[MAXN];
vector<int> eulerTour;
vector<int> firstAppearance;

void dfs(int u, int parent, int d) {
    depth[u] = d;
    eulerTour.push_back(u);
    for (int v : adj[u]) {
        if (v != parent) {
            dfs(v, u, d + 1);
            eulerTour.push_back(u);
        }
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, q;
        cin >> n >> q;

        color.reset();
        eulerTour.clear();
        firstAppearance.assign(n + 1, -1);

        for (int i = 0; i <= n; i++) {
            adj[i].clear();
        }

        for (int i = 2; i <= n; i++) {
            int p;
            cin >> p;
            adj[i].push_back(p);
            adj[p].push_back(i);
        }

        string s;
        cin >> s;

        for (int i = 0; i < n; i++) {
            color[i + 1] = (s[i] == '1');
        }

        dfs(1, 0, 0);

        for (int i = 0; i < eulerTour.size(); i++) {
            int u = eulerTour[i];
            if (firstAppearance[u] == -1) {
                firstAppearance[u] = i;
            }
        }

        while (q--) {
            int x, y;
            cin >> x >> y;

            int lca = -1;
            int minX = min(firstAppearance[x], firstAppearance[y]);
            int maxY = max(firstAppearance[x], firstAppearance[y]);

            for (int i = minX; i <= maxY; i++) {
                int node = eulerTour[i];
                if (firstAppearance[node] >= minX) {
                    lca = node;
                    break;
                }
            }

            int ans = depth[x] + depth[y] - 2 * depth[lca] + color[lca];
            cout << ans << endl;
        }
    }

    return 0;
}
