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
#define aint(x) x.begin(), x.end()
#define sqrt sqrtl
#define ff first
#define ss second
#define int long long
#define INF 1000000000
#define mod 1000000007
//_________________Function_______________
int nPr(int n, int r){ if (r > n / 2) r = n - r; int result = 1; for (int i = 1; i <= r; ++i) { result *= n - i + 1;} return result; }
int nCr(int n, int r){ if (r > n / 2) r = n - r; int result = 1; for (int i = 1; i <= r; ++i) { result *= n - i + 1; result /= i; } return result; }
int Ceil(int a, int b){return (a + b - 1) / b;}
int pow(int a, int b){ int res = 1; while (b){ if(b&1){ res *= a; b--;} a *= a; b /= 2; } return res;}
//_________________template______________

template<typename T> istream& operator >> (istream &istream, vector<T> &v) {for (auto &it : v) cin >> it; return istream;}
template <typename T> ostream& operator<<(ostream &os, const vector<T> &v) {for (auto e : v){os << e << " ";}return os;}

int find_set(int x, vector<pair<int,int>> & parent){
    if(parent[x].ff==x){
        return x;
    }
    return parent[x].ff = find_set(parent[x].ff,parent);
}
 
void union_set(int x,int y,vector<pair<int,int>>& parent){
    int xroot = find_set(x,parent);
    int yroot = find_set(y,parent);
    if(xroot==yroot){
        return;
    }
    if(parent[xroot].ss>parent[yroot].ss){
        parent[yroot].ff = xroot;
    }
    else if(parent[yroot].ss>parent[xroot].ss){
        parent[xroot].ff = yroot;
    }
    else{
        parent[xroot].ss++;
        parent[yroot].ff = xroot;
    }
}
void sol(int tc)
{
    int n,m1,m2;
    cin>>n>>m1>>m2;
    
    vector<pi> parent1,parent2;
    for(int i=0;i<=n+1;i++){
        parent1.pb({i,0});
        parent2.pb({i,0});
    }
    
    vector<vi> mat1(n+1,vi(n+1,0)); 
    vector<vi> mat2(n+1,vi(n+1,0));
    
    while(m1--){
        int a,b;
        cin>>a>>b;
        union_set(a,b,parent1);
    }
    
    while(m2--){
        int a,b;
        cin>>a>>b;
        union_set(a,b,parent2);
    }
    vector<pi> ans;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(find_set(i,parent1)!=find_set(j,parent1) and find_set(i,parent2)!=find_set(j,parent2)){
                ans.pb({i,j});
                union_set(i,j,parent1);
                union_set(i,j,parent2);
            }
        }
    }
    cout<<ans.size()<<endl;
    for(auto it:ans){
        cout<<it.ff<<" "<<it.ss<<endl;
    }
}
//Before Submit handle the case for 0 and 1
int32_t main()
{
    FastIO;
    //TxtIO;
    int tt;
    tt = 1;
    // cin >> tt;
    for(int i = 1; i<= tt; i++)
    {
        sol(i);
    }
}