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
int nPr(int n, int r){ if (r > n / 2) r = n - r; int result = 1; for (int i = 1; i <= r; ++i) { result *= n - i + 1;} return result; }
int nCr(int n, int r){ if (r > n / 2) r = n - r; int result = 1; for (int i = 1; i <= r; ++i) { result *= n - i + 1; result /= i; } return result; }
int Ceil(int a, int b){return (a + b - 1) / b;}
int pow(int a, int b){ int res = 1; while (b){ if(b&1){ res *= a; b--;} a *= a; b /= 2; } return res;}
//_________________template______________

template<typename T> istream& operator >> (istream &istream, vector<T> &v) {for (auto &it : v) cin >> it; return istream;}
template <typename T> ostream& operator<<(ostream &os, const vector<T> &v) {for (auto e : v){os << e << " ";}return os;}
vector<int>par;
vector<int>_rank;
int find(int x){
    if(par[x] < 0) return x;

    return par[x] = find(par[x]);
}
void _union(int x, int y){
    x = find(x);
    y = find(y);

    if(x == y) return;

    if(_rank[x] > _rank[y]){
        _rank[x] += _rank[y];
        par[y] = x;
    }
    else{
        _rank[y] += _rank[x];
        par[x] = y;
    }
}
void sol(int tc)
{
    int n,q;cin>>n>>q;
    par.resize(n+1);
    _rank.resize(n+1);

    string s;cin>>s;
    s = "#" + s;
    int mx = 0;
    for(int i = 1; i<=n; i++){
        if(s[i] == '1'){
            par[i] = -1;
            _rank[i] = 1;

            if(i > 1 and s[i-1] =='1') _union(i, i-1);
            int p = find(i);
            mx = max(mx, _rank[p]);
        }
    }
    // return;
    while(q--){
        int type;
        cin>>type;
        if(type == 1){
            cout << mx << endl;
        }
        else{
            int pos;cin>>pos;
            if(s[pos] == '1') continue;

            s[pos] = '1';
            _rank[pos] = 1;
            par[pos] = -1;

            if(pos > 1 and s[pos-1] =='1') _union(pos, pos-1);
            if(pos < n and s[pos+1] == '1') _union(pos, pos+1);

            int p = find(pos);
            mx = max(mx, _rank[p]);
        }
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