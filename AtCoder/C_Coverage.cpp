#include <bits/stdc++.h>
using namespace std;

#define FastIO ios_base::sync_with_stdio(0), cin.tie(0)
#define TxtIO  freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define f0(i, n) for (int i = 0; i < n; i++)
#define f1(i, n) for (int i = 1; i <= n; i++)
#define f2(i, n) for (int i = 1; i < n; i++)
#define endl "\n"
#define pb push_back
#define mp make_pair
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

void sol()
{
    int n,m;cin>>n>>m;
    int q = m;
    vector<vector<int>>v(m);
    int idx = 0;
    while(m--){
        int c;cin>>c;
        for(int i = 0; i<c; i++){
            int a;cin>>a;
            v[idx].pb(a);
        }
        idx++;
    }    
    // for(auto it:v){
    //     for(auto x: it){
    //         cout << x << " ";
    //     }
    //     cout << endl;
    // }
    int res = 0;
    
    for(int i = 1; i<(1<<q); i++){
        set<int>st;
        int ls = 1;
        for(int j = 0; j<q; j++){
            // cout << i<<" ";
            if(ls & i){
                for(auto x: v[j]){
                    st.insert(x);
                }
            }
            ls <<= 1;
        }
        if(st.size() == n){
            res++;
        }
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