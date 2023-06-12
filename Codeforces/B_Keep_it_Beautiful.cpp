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
template <typename T> ostream& operator<<(ostream &os, const vector<T> &v) {for (auto e : v){os << e << "";}return os;}

void sol()
{
    vector<int>res;

    int n;cin>>n; 
    vi v;
    bool occur = false;
    for(int i = 0; i<n; i++){
        int p;cin>>p;
        if(i == 0){
            res.pb(1);
            v.pb(p);
            continue;
        }
        int sz = v.size();
        if(v[sz-1] > p && occur == false){ // 2 1
            if(v[0] >= p){
                // cout << p <<endl;
                res.pb(1);
                v.pb(p);
                occur = true;
            }else{
                res.pb(0);
            }
        }else{
            if(occur){
                // cout <<i<<endl;
                // cout << v[sz-1] <<" "<<p<<endl;
               if(v[sz-1] <= p && v[0] >= p){
                // cout <<"2nd"<<endl; // 2 <= 1
                    res.pb(1);
                    v.pb(p);
                }else{
                    res.pb(0);
                }
                continue;
            }
            res.pb(1);
            v.pb(p);
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
    cin >> tt;
    while (tt--)
    {
        sol();
    }
}