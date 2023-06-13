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
    int n,w,h;cin>>n>>w>>h;
    vector<pair<int,int>>a(n);
    vector<pair<int,int>>b(n);
    for(int i = 0; i<n; i++){
        int x;cin>>x;
        a[i].ff = x - w;
        a[i].ss = x + w;
    }

    for(int i = 0; i<n; i++){
        int x;cin>>x;
        b[i].ff = x - h;
        b[i].ss = x + h;
    }
    bool left = false, right = false;
    int mxl = 0, mxr = 0;
    for(int i = 0; i<n; i++){
        if(a[i].ff > b[i].ff){
            left = true;
            mxl = max(mxl, a[i].ff - b[i].ff);
        }
        if(b[i].ss > a[i].ss){
            right = true;
            mxr = max(mxr, b[i].ss - a[i].ss);
        }
    }

    if(left == true && right == true){
        cout << "NO"<<endl;
        return;
    }

    if(left){
        // bool flag = false;
        for(int i = 0; i<n; i++){
            if(!((a[i].ff - mxl) <= b[i].ff && (a[i].ss - mxl) >= b[i].ss)){
                cout << "NO" << endl;
                return;
            }
        }
    }else{
        for(int i = 0; i<n; i++){
            if(!((a[i].ff + mxr) <= b[i].ff && (a[i].ss + mxr) >= b[i].ss)){
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout <<"YES"<<endl;
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