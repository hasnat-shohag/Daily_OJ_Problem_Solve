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

void sol()
{
    string a, b;
    cin >> a >> b;
    int la = a.size();
    int lb = b.size();
    string ans = "";
    if (a[la - 1] == b[lb - 1])
    {
        ans += "*";
        ans += a[la - 1];
        cout << "YES" << endl;
        cout << ans << endl;
    }
    else if (a[0] == b[0])
    {
        ans += a[0];
        ans += "*";
        cout << "YES" << endl;
        cout << ans << endl;
    }
    else
    {
        bool flag = false;
        for (int i = 0; i + 1 < la; i++)
        {
            for (int j = 0; j + 1 < lb; j++)
            {
                if (a[i] == b[j] && a[i + 1] == b[j + 1])
                {
                    ans += "*";
                    ans += a[i];
                    ans += a[i + 1];
                    ans += "*";
                    flag = true;
                    break;
                }
            }
            if (flag)
            {
                break;
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
            cout << ans << endl;
        }else{
            cout <<"NO"<<endl;
        }
    }
}
// Before Submit handle the case for 0 and 1
int32_t main()
{
    FastIO;
    // TxtIO;
    int tt;
    tt = 1;
    cin >> tt;
    while (tt--)
    {
        sol();
    }
}