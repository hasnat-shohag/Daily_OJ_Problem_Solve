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
bool cmp(pair<int,int>a, pair<int,int>b){
    if(a.ff == b.ff){
        return a.ss > b.ss;
    }
    return a.ff < b.ff;
}
void sol()
{
    int n,k,l;cin>>n>>k>>l;
    vector<pair<int,int>>v(n);

    vector<int>vec(n);

    map<int,int>mp;
    f0(i,n){
        cin>>v[i].ss>>v[i].ff;
        // vec[i] = 
        mp[v[i].ff]++;
    }
    if(mp[l] < k){
        cout << -1 << endl;
        return;
    }

    sort(all(v), cmp);
    // for(auto it:v){
    //     cout << it.ff <<" "<<it.ss<<endl;
    // }
    int sum = 0;
    int idx = 0;
    for(int i = 0; i<n; i++){
        if(idx < k && v[i].ff == l){
            sum += v[i].ss;
            idx++;
        }
    }
    cout << sum << endl;
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