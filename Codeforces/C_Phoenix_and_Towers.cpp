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
    int n,m,x;cin>>n>>m>>x;

    vector<pair<int,int>>v;
    int xx;
    for(int i = 0; i<n; i++){
        cin>>xx;
        v.pb({xx,i});
    }
    
    vector<int>idx(n, 0);
        
    sort(all(v));
    set<pair<int, int>>st; // val, index
    int track = 1;
    int mm = m;
    for(int i = n-1; i>= 0 && m>0; i--){
        st.insert({v[i].ff, track});
        idx[v[i].ss] = track;
        track++;
        m--;
    }
    
    for(int i = n-mm-1; i>=0;i--){
        auto it = st.begin();
        idx[v[i].ss] = it->ss;
        int val = it->ff + v[i].ff;
        
        st.insert({val, it->ss});
        st.erase(it);
    }
    
    int mx = 0,mn = LLONG_MAX;
    for(auto it:st){
        mx = max(mx, it.ff);
        mn = min(mn, it.ff);
    }

    if(mx-mn > x){
        cout <<"NO"<<endl;return;
    }
    cout <<"YES"<<endl;
    for(int x:idx){
        cout <<x <<" ";
    }
    cout << endl;
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