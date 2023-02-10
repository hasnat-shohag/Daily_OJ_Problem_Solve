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
int nd(int n)
{
    int cnt = 0;
    while (n > 0)
    {
        int tmp = n % 10;
        cnt += tmp;
        n /= 10;
    }
    return cnt;
}
void sol()
{
    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << n / 2 << " " << n / 2 << endl;
    }
    else
    {
        string s = to_string(n);
        // cout <<s << endl;
        string a = "";
        for (int i = (int)s.size() - 1; i >= 0; i--)
        {

            int p = s[i] - '0';
            // cout << p <<",";
            int tmp;
            tmp = p / 2;
            if (p % 2 && i - 1 >= 0)
            {
                char r = tmp + '0';
                a = r + a;
                int l = s[i-1] - '0';
                s[i - 1] = (l+1) + '0';
            }
            else
            {
                char r = tmp + '0';
                a = r + a;
            }
        }
        int fst = n - stoi(a);
        int snd = stoi(a);
        cout << fst <<" "<<snd << endl;

    }
}

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