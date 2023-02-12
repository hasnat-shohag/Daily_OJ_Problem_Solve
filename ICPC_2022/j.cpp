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
#define mod 1000000007
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

void sol(int tc)
{
    int n;
    cin >> n;
    int k;
    cin >> k;
    int sum = 0;
    int mx = 0;
    int idx = 0;
    vi v(n);
    f0(i, n)
    {
        cin >> v[i];
        if(mx < v[i]){
            mx = v[i];
            idx = i;
        }
    }
    int a = 0;int b = 0;
    f0(i,n){
        if(i < idx){
            a += v[i];
        }else if(i > idx){
            b += v[i];
        }
    }
    int res = a + b + (k * v[idx]);
    cout <<"Case "<<tc<<": "<< res << endl;
}
// Before Submit handle the case for 0 and 1
int32_t main()
{
    FastIO;
    // TxtIO;
    int tt;
    tt = 1;
    cin >> tt;
    
    for(int i = 1; i<= tt; i++)
    {
        sol(i);
    }
}