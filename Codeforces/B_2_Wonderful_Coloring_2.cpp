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
// int ll = 1;
void sol()
{
    int n;cin>>n;
    int k;cin>>k;
    vi v(n);
    map<int, vector<int>>mp;
    map<int, int>freq;

    set<int>st;
    multiset<int>mst;
    int x; 
    for(int i = 0; i<n; i++){
        cin>>x; v[i] = x;
        mp[x].pb(i);
        freq[x]++;
    }

    for(int i = 1; i<= k; i++){
        st.insert(i);
    }

    vector<int>res(n, 0);
    int sum = 0;
    vector<pair<int,int>>occ; // freq, val
    for(auto it:freq){
        occ.pb({it.ss, it.ff});
        if(it.ss < k){
            sum += it.ss;
        }
    }

    sort(all(occ), greater<>());
    vector<int>val;

    for(int i = 0; i<occ.size(); i++){
        // mp[occ[i].ss]
        if(occ[i].ff >= k){
            auto it = st.begin();
            for(int j = 0, l = 0; j<mp[occ[i].ss].size() && l < k; j++, l++){
                // occ[i].ss key
                res[mp[occ[i].ss][j]] = *it;
                it++;
            }
        }else{
            val.pb(occ[i].ss);
        }
    }
    vector<int>vec;
    for(int i = 0; i<val.size(); i++){
        for(int j = 0; j<mp[val[i]].size(); j++){
            vec.pb(mp[val[i]][j]);
        }
    }
    
    auto it = st.begin();

    for(int i = 0; i<sum - (sum % k); i++){
        res[vec[i]] = *it;
        it++;
        if(it == st.end()){
            it = st.begin();
        }
    }

    cout << res << endl;
    // ll++;
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