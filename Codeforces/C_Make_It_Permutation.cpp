#include <bits/stdc++.h>
using namespace std;

#define FastIO ios_base::sync_with_stdio(0), cin.tie(0)
#define TxtIO  freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define f0(i, n) for (int i = 0; i < n; i++)
#define f1(i, n) for (int i = 1; i <= n; i++)
#define f2(i, n) for (int i = 1; i < n; i++)
#define endl "\n"
#define pb push_back
// #define mp make_pair
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
    int n,c,d;cin>>n>>c>>d;

    // set<int>st;
    map<int,int>mp;    
    vector<int>v;
    int a;
    for(int i = 0; i<n; i++){
        cin>>a;
        int sz = mp.size();
        mp[a]++;
        if(sz<mp.size()){
            v.pb(a);
        }
    }
    sort(all(v));
    // cout << v << endl;
    int total = 0;
    if(mp[1] == 0){
        vector<int>vec;
        vec.pb(1);
        for(int i = 0; i<v.size(); i++){
            vec.pb(v[i]);
        }
        v.clear();
        total += d;
        v = vec;
    }
    for(auto it:mp){
        int p = it.ss;
        if(p>1){
            total += ((p-1)*c);
        }
    }
    int m = v.size();
    
    int res = LLONG_MAX;

    for(int i = 0; i<m; i++){
        int gap = v[i] - (i+1);
        int costOfInsert = gap * d;

        int removeGap = m - i-1;
        int costOfRemove = removeGap * c;
        
        res  = min(res , costOfInsert+costOfRemove);
    }   
    cout << total + res <<endl;
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