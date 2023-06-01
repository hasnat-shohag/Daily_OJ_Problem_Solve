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
//_________________Function_______________
int Ceil(int a, int b){return (a + b - 1) / b;}
int pow(int a, int b){ int res = 1; while (b){ if(b&1){ res *= a; b--;} a *= a; b /= 2; } return res;}
//_________________template______________

template<typename T> istream& operator >> (istream &istream, vector<T> &v) {for (auto &it : v) cin >> it; return istream;}
template <typename T> ostream& operator<<(ostream &os, const vector<T> &v) {for (auto e : v){os << e << " ";}return os;}

vector<pair<int,int>>adj[1000000];
map<pair<int,int>,int> mp;
vector<int>dis;

void dfs(int cur, int par){

    for(auto i:adj[cur]){
        int id = i.ss;
        int to = i.ff;

        if(to == par) continue;
        mp[{cur, to}] = id;
        mp[{to, cur}] = id;
        if(dis[cur] != INT_MAX){
            if(cur == 1){
                dis[to] = 1;
            }else{
                if(id < mp[{cur, par}]){
                    dis[to] = dis[cur]+1;
                }else{
                    dis[to] = dis[cur];
                }
            }
        }
        dfs(to, cur);
    }
}
void sol()
{
    int n;cin>>n;
    mp.clear();
    dis.clear();

    for(int i=0;i<=n;i++){
         adj[i].clear();
    }

    dis.assign(n+1, LLONG_MAX);
    dis[0] = 0;
    dis[1] = 0;

    for(int i = 1; i<n; i++){
        int u,v;cin>>u>>v;
        adj[u].push_back({v,i});
        adj[v].push_back({u,i});
    }

    dfs(1, -1);

    int mx = *max_element(all(dis));
    cout << mx << endl;

}
//Before Submit handle the case for 0 and 1
int32_t main()
{
    FastIO;
    //TxtIO;
    int tt;
    tt = 1;
    cin >> tt;
    while (tt--)
    {
        sol();
    }
}