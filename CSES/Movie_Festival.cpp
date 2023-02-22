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
bool cmp(pair<int, int> A, pair<int, int> B)
{
    return A.ss < B.ss;
}
void sol()
{
    int n;
    cin >> n;
    vector<pair<int, int>> vec;
    f0(i, n)
    {
        int u, v;
        cin >> u >> v;
        vec.pb({u, v});
    }
    sort(all(vec), cmp);
    // for (auto it : vec)
    // {
    //     cout << it.ff << " " << it.ss << endl;
    // }cout<<"......"<<endl;
    int res = 1;
    int tracker = vec[0].ss;
    for(int i = 0; i+1<n; i++){
        if(tracker <= vec[i+1].ff){
            // cout << vec[i].ss<<" "<<vec[i+1].ff<<endl;
            res++;
            tracker = vec[i+1].ss;
        } 
    }
    cout << res << endl;
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