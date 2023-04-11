#include <bits/stdc++.h>
using namespace std;

#define FastIO ios_base::sync_with_stdio(0), cin.tie(0)
#define TxtIO  freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define f0(i, n) for (int i = 0; i < n; i++)
#define f1(i, n) for (int i = 1; i <= n; i++)
#define f2(i, n) for (int i = 1; i < n; i++)
#define endl "\n"
#define pb push_back
#define mp make_pair
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
    int a,b;cin>>a>>b;
    int res= 0;
    int x = min(a,b);
    int y = max(a,b);
    int xx = x;
    int m = 1;
    
    int r_m = 0;
    m = Ceil(y, 2);
    if(x == y){
        cout << x + 1 << endl;
        return;
    }

    // if(x > (y/2)){
    //     res = 2 + 2 + m-1;
    //     if((y/2)*2 != y) res++;
    //     cout << res << endl;
    //     return;
    // }

    res = 3 + (m-1);
    // if(x > (y/2)) res++;
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