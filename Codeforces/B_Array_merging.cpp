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
    vi a(n),b(n);
    map<int,int>mp1,mp2;
    f0(i,n){
        cin>>a[i];
    }
    f0(i,n){
        cin>>b[i];
    }
    int cnt = 1;
    for(int i = 0; i+1<n; i++){
        if(a[i] == a[i+1]){
            cnt++;
            mp1[a[i]] = max(mp1[a[i]], cnt);
        }
        else{
            cnt = 1;
            mp1[a[i]] = max(mp1[a[i]], cnt);
        }
    }
    if(a[n-1] != a[n-2]){
        mp1[a[n-1]] = max(mp1[a[n-1]], cnt);
    }
    // iterate for 2nd array
    cnt = 1;
    for(int i = 0; i+1<n; i++){
        if(b[i] == b[i+1]){
            cnt++;
            mp2[b[i]] = max(mp2[b[i]], cnt);
        }
        else{
            cnt = 1;
            mp2[b[i]] = max(mp2[b[i]], cnt);
        }
    }
    if(b[n-1] != b[n-2]){
        mp2[b[n-1]] = max(mp2[b[n-1]], cnt);
    }

    int mx = 0;
    for(auto it:mp1){
        int sum = mp1[it.ff]+mp2[it.ff];
        mx = max(mx, sum);
    }
    for(auto it:mp2){
        int sum = mp1[it.ff]+mp2[it.ff];
        mx = max(mx, sum);
    }
    cout << mx << endl;
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