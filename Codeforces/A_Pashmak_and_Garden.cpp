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
int bahur_lenght(int a, int b, int c, int d)
{
    int res = sqrt((a - c) * (a - c) + (b - d) * (b - d));
    return res;
}

void sol()
{
    int x1, x2, x3, x4, y1, y2, y3, y4;
    cin >> x1 >> y1 >> x2 >> y2;
    int d1, d2, d3, d4;
    if (x1 == x2 || y1 == y2)
    {
        if(x1 == x2){
            int s = abs(y2-y1);
            y3 = y1;
            y4 = y2;
            x3 = x1 + s;
            x4 = x2 + s;
        }else{
            int s = abs(x1 - x2);
            x3 = x1;
            x4 = x2;
            y3 = s + y1;
            y4 = s + y2;
        }
    }else if(abs(x1 -x2) == abs(y1-y2)){
        x3 = x1;
        x4 = x2;
        y3 = y2;
        y4 = y1;
    }else{
        cout << -1 << endl; return;
    }
    cout << x3 << " " << y3 << " " << x4 << " " << y4 << endl;

}

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