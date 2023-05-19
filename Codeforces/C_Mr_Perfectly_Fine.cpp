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

void sol()
{
    int n;cin>>n;
    vector<pair<int,string>>v(n);
    f0(i,n){
        cin>>v[i].ff>>v[i].ss;
    }    
    sort(all(v));
    int ans = 0;
    int a = 0, b = 0;
    int ans2 = INF;
    f0(i,n){
        if(v[i].ss[0] == '1' && v[i].ss[1] == '1'){
            ans2 = v[i].ff;
            break;
        }
    }

    for(int i = 0; i<n; i++){
        string p = v[i].ss;
        if(a==0 && p[0] == '1'){
            a = 1;
            ans += v[i].ff;
        }
        if(b == 0 && p[1] == '1'){
            b = 1;
            ans += v[i].ff;
        }
    }
    if(a == b && a == 1){
        int res= min(ans, ans2);
        cout << res << endl;
    }else cout << -1 << endl;
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