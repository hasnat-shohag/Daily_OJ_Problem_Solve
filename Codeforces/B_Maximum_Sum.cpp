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
    int n,k;cin>>n>>k;
    int sum = 0;
    vi v(n);
    f0(i,n){
        cin>>v[i];
        sum += v[i];
    }
    sort(all(v));
    vector<int>pre(n);
    pre[0] = v[0];
    for(int i = 1; i<n; i++){
        pre[i] = pre[i-1] + v[i];
    }

    int ans = 0;
    int idx = 1;
    int m = 0; int mm = k;
    for(int i = 1; i<=k; i++){
        int temp = pre[n-(k-m)-1] - (m != 0 ? pre[2*m - 1]:0);
        int temp2 = pre[n-1] - pre[2*mm-1] - (pre[n-1]-pre[n-idx]); idx++;
        ans = max(ans, max(temp, temp2));
        m++;
        mm--;
    }


    cout << ans << endl;
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