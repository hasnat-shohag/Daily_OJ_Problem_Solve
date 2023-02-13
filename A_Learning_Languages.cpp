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
vector<int> vis;

void dfs(int node)
{
    vis[node] = 1;
    for (auto child : adj[node])
    {
        if (vis[child] == 0)
        {
            vis[child] = 1;
            dfs(child);
        }
    }
}
void sol()
{
    int n, m;
    cin >> n >> m;
    adj.clear();
    adj.resize(n+1);
    vis.clear();
    vis.resize(n);
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        for (int j = 0; j < k; j++)
        {
            int p;
            cin >> p;
            adj[i+1].pb(p);
            adj[p].pb(i+1);
        }        
    }
    int cnt = 0;
    for(int it = 1; it<= n; it++){
        if(vis[it] == 0){
            dfs(it);
            cnt++;
        }
    }
    cout << cnt -1 << endl;
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