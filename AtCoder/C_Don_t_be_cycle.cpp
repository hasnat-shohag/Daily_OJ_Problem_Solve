#include <bits/stdc++.h>
using namespace std;

#define FastIO ios_base::sync_with_stdio(0), cin.tie(0)
#define TxtIO  freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define f0(i, n) for (int i = 0; i < n; i++)
#define f1(i, n) for (int i = 1; i <= n; i++)
#define f2(i, n) for (int i = 1; i < n; i++)
#define endl "\n"
#define pb push_back
//#define mp make_pair
#define vi vector<int>
#define pi pair<int, int>
#define all(x) x.begin(), x.end()
#define sqrt sqrtl
#define ff first
#define ss second
#define int long long
#define INF 1000000000
#define mod 1000000007
int Ceil(int a, int b){return (a + b - 1) / b;}
//_________________template______________

template<typename T> istream& operator >> (istream &istream, vector<T> &v) {for (auto &it : v) cin >> it; return istream;}
template <typename T> ostream& operator<<(ostream &os, const vector<T> &v) {for (auto e : v){os << e << " ";}return os;}
vector<vector<int>>adj;
vector<int>vis;
int cnt  = 0;
vector<int>cc;

void dfs(int node){
    cc.pb(node);
    vis[node] = 1;
    for(int x: adj[node]){
        if(!vis[x]){
            dfs(x);
        }
    }
}

void sol()
{
    int n,m;cin>>n>>m;
    adj.clear();
    vis.clear();
    adj.resize(n);
    vis.resize(n);

    for(int i = 1; i<=m; i++){
        int u,v;cin>>u>>v; --u,--v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    // for(int i = 0; i<adj.size(); i++){
    //     for(int j = 0; j<adj[i].size(); j++){
    //         cout << adj[i][j]<<" ";
    //     }cout<<endl;
    // }
    vector<vector<int>>ans;

    for(int it = 0; it<n; it++){
        if(!vis[it]){
            cc.clear();
            dfs(it);
            ans.pb(cc);
        }
    }

    int res = 0;
    for(int i = 0; i<ans.size(); i++){
        int temp = 0;
        // cout << ans[i]<<endl;
        int sz = ans[i].size();
        if(sz == 1) continue;

        for(int j = 0; j<ans[i].size(); j++){
            temp += adj[ans[i][j]].size();
        }
        int edge = temp/2;
        res += edge - (sz-1);
    }
    cout << res << endl;
}
//Before Submit handle the case for 0 and 1
int32_t main()
{
    FastIO;
    //TxtIO;
    int tt;
    tt = 1;
    // cin >> tt;
    while (tt--)
    {
        sol();
    }
}