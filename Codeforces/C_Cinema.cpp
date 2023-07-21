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

void sol()
{
    int n;cin>>n; vi v(n); cin>>v;

    int m;cin>>m;
    vector<pair<int,int>>cinema(m);
    
    f0(i,m){
        cin>>cinema[i].ff;
    }
    f0(i,m){
        cin>>cinema[i].ss;
    }
    map<int,int>mp;
    f0(i,n){
        mp[v[i]]++;
    }
    
    int mx = 0;
    for(int i = 0; i<m; i++){
        mx = max(mx, mp[cinema[i].ff]);
    }
    // cout << mx << endl;
    vector<int>freq; // for audio signal
    for(int i = 0; i<m; i++){
        if(mx == mp[cinema[i].ff]){
            freq.pb(i);
        }
    }
    if(freq.size() == 1){
        cout << freq[0]+1<<endl;
        return;
    }
    int idx = -1;
    mx = -1;
    for(int i = 0; i<freq.size(); i++){
        if(mx<mp[cinema[freq[i]].ss]){
            mx = mp[cinema[freq[i]].ss];
            idx = freq[i];
        }
    }
    cout << idx+1 << endl;
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