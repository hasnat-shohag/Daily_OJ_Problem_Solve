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
int t;
bool flag = false;
void dfs(int node)
{
    vis[node] = 1;
    for (auto x : adj[node])
    {
        if (x == t)
        {
            flag = true;
            return;
        }
        if (vis[x] != 1)
            dfs(x);
    }
}
void sol()
{
    int node, edge;
    cin >> node >> edge;
    adj.resize(node + 1);
    vis.resize(node + 1, 0);
    // Is it connected to node 3 to node 5?
    for (int i = 0; i < edge; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    int s;
    cin >> s >> t;
    dfs(s);
    string ans =  (flag == true) ? "Yes":"No";cout<<ans<<endl;
}
// Before Submit handle the case for 0 and 1
int32_t main()
{
    FastIO;
    // TxtIO;
    int tt;
    tt = 1;
    // cin >> tt;
    while (tt--)
    {
        sol();
    }
}