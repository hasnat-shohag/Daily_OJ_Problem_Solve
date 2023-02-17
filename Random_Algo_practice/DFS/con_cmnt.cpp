#include <bits/stdc++.h>
using namespace std;

#define FastIO ios_base::sync_with_stdio(0), cin.tie(0)
#define TxtIO                         \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define f0(i, n) for (int i = 0; i < n; i++)
#define f1(i, n) for (int i = 1; i <= n; i++)
#define f2(i, n) for (int i = 1; i < n; i++)
#define endl "\n"
#define pb push_back
#define mp make_pair
#define vi vector<int>
#define pi pair<int, int>
#define all(x) x.begin(), x.end()
#define ff first
#define ss second
#define int long long
#define INF 1000000000
#define mod 1000000007
int Ceil(int a, int b)
{
    return (a + b - 1) / b;
}
//_________________template______________

template <typename T> // printByVectorName
ostream &operator<<(ostream &os, const vector<T> &v)
{
    for (auto e : v)
    {
        os << e << " ";
    }
    return os;
}

vector<vector<int>> adj;
vector<bool> vis;
// vector<int> cmpnt;

void dfs(int node)
{
    vis[node] = 1;
    // cmpnt.push_back(node);
    for (auto child : adj[node])
    {
        if (vis[child] != 1)
        {
            dfs(child);
        }
    }
}

void sol()
{
    int node, edge;
    cin >> node >> edge;

    adj.clear();
    vis.clear();
    adj.resize(node + 1);
    vis.resize(node + 1);

    for (int i = 0; i < edge; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    // vector<vector<int>> ans;

    int cnt = 0;
    for (int i = 0; i < node; i++)
    {
        if (vis[i] != 1)
        {
            dfs(i);
            cnt++;
        }
        // if (cmpnt.size() != 0)
        //     ans.push_back(cmpnt);
        // cmpnt.clear();
    }
    // for(int i = 0; i<ans.size(); i++){
    //     for(int j = 0; j<ans[i].size(); j++){
    //         cout << ans[i][j]<<" ";
    //     }
    //     cout << endl;
    // }
    // cout << ans.size()<<endl;

    cout << cnt << endl;
}
// Before Submit handle the case for 0 and 1
int32_t main()
{
    FastIO;
    // TxtIO;
    int tt;
    tt = 1;
    cin >> tt;
    while (tt--)
    {
        sol();
    }
}