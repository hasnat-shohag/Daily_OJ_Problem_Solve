#include<bits/stdc++.h>
using namespace std;

#define FastIO ios_base::sync_with_stdio(0), cin.tie(0)
#define f0(i,n)  for(int i = 0; i<n; i++)
#define f1(i,n)  for(int i = 1; i<=n; i++)
#define f2(i,n)  for(int i = 1; i<n; i++)
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
int Ceil(int a, int b) { return (a+b-1)/b; }

vi vis;
vector<vector<int>>adj;
vi comp;//components

void dfs(int node){
    comp.pb(node);
    vis[node] = 1;
    for(int x:adj[node]){
        if(!vis[x]){
            vis[x] = 1;
            dfs(x);
        }
    }
}

void sol()
{
    int node,edge;cin>>node>>edge;
    vis.clear();
    adj.clear();
    vis.resize(node+1);
    adj.resize(node+1);

    int u,v;
    f0(i,edge){
        cin>>u>>v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    vector<vector<int>>ans;// connected components elements
    
    f1(i,node){
        if(!vis[i]){
            comp.clear();
            dfs(i);
            ans.pb(comp);
        }
    }   
    // cout << ans.size() << endl;
    for(int i = 0; i<ans.size(); i++){
        int len = ans[i].size();
        int temp = 0;
        for(auto x:ans[i]){
            int p = adj[x].size();
            temp += p;
        }
        temp /= 2;
        if(len != temp){
            cout <<"No"<<endl;
            return;
        }
    }
    cout << "Yes"<<endl;
}

int32_t main(){
    FastIO;
    int tt;
    tt = 1;
    // cin>>tt;
    while(tt--){
        sol();
    }
}