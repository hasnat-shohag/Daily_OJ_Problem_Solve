#include <bits/stdc++.h>
using namespace std;

#define FastIO ios_base::sync_with_stdio(0), cin.tie(0)
#define TxtIO                         \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define f0(i, n) for (int i = 0; i < n; i++)
#define f1(i, n) for (int i = 1; i <= n; i++)
#define f2(i, n) for (int i = 1; i < n; i++)
#define endl "\n"
#define pb push_back
#define mp make_pair
#define vi vector<int>
#define pi pair<int, int>
#define all(x) x.begin(), x.end()
#define ff first
#define ss second
#define int long long
#define INF 1000000000
#define mod 998244353
int Ceil(int a, int b)
{
    return (a + b - 1) / b;
}
//_________________template______________

template <typename T> // printByVectorName
ostream &operator<<(ostream &os, const vector<T> &v)
{
    for (auto e : v)
    {
        os << e << " ";
    }
    return os;
}

void sol()
{
    int n;
    cin >> n;
    vi a(n), b(n);
    f0(i, n)
    {
        cin >> a[i] >> b[i];
    }
    vector<int> dp0(n);
    vector<int> dp1(n);

    dp0[0] = 1;
    dp1[0] = 1;

    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] != a[i + 1]) {
            dp0[i + 1] += dp0[i]; 
            dp0[i + 1] %= mod; 
        }

        if (a[i] != b[i + 1]) {
            dp1[i + 1] += dp0[i]; 
            dp1[i + 1] %= mod; 
        }

        if (b[i] != a[i + 1]) {
            dp0[i + 1] += dp1[i]; 
            dp0[i + 1] %= mod; 
        }

        if (b[i] != b[i + 1]){
            dp1[i + 1] += dp1[i]; 
            dp1[i + 1] %= mod;
        }
    }

    cout <<((dp0[n - 1] + dp1[n - 1]) % mod)<<endl;
}
// Before Submit handle the case for 0 and 1
int32_t main()
{
    FastIO;
    // TxtIO;
    int tt;
    tt = 1;
    // cin >> tt;
    while (tt--)
    {
        sol();
    }
}