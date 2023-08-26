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

void sol(int tc)
{
    int n,k;cin>>n>>k;
    string s;cin>>s;

    if(k % 2 == 0){
        sort(all(s));
        cout << s << endl;
        return;
    }

    char ch = s[n-1];
    int idx = n-1;
    for(int i = n-3; i>=0; i-=2){
        if(ch < s[i]){
            ch = s[i];
            idx = i;
        }
    }
    swap(s[n-1], s[idx]);

    ch = s[n-2];
    idx = n-2;
    for(int  i = n-4; i >= 0; i-=2){
        if(ch < s[i]){
            ch = s[i];
            idx = i;
        }
    }
    swap(s[n-2], s[idx]);

    string s1, s2;
    for(int i = 0; i<n-2; i+=2){
        s1.pb(s[i]);
    }
    for(int i = 1; i<n-2; i+=2){
        s2.pb(s[i]);
    }

    sort(all(s1));
    sort(all(s2));

    int mn = min(s1.size(), s2.size());
    int mx = max(s1.size(), s2.size());
    string res;
    for(int i = 0; i<mn; i++){
        res.pb(s1[i]);
        res.pb(s2[i]);
    }
    if(mn != mx){
        res.pb(s1[mn]);
    }
    res += s[n-2];
    res += s[n-1];

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
    for(int i = 1; i<= tt; i++)
    {
        sol(i);
    }
}