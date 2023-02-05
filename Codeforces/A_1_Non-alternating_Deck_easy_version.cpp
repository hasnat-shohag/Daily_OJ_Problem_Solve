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
vector<int> a, b;
void sol()
{
    int n;
    cin >> n;
    int alice_white = 0;
    int alice_black = 0;
    int bob_white = 0;
    int bob_black = 0;
    int idx = 0;
    int i = 0;
    int j = 0;
    int tracker = 0;
    while (n > 0)
    {
        if (idx % 2 == 0)
        {
            if (a[i] > n)
            {
                if (n % 2 == 0)
                {
                    int tmp = n / 2;
                    alice_white += tmp;
                    alice_black += tmp;
                }
                else
                {
                    int tmp = n / 2;
                    alice_white += tmp + 1;
                    alice_black += tmp;
                }
                break;
            }

            int tmp = a[i] / 2;
            alice_white += tmp + 1;
            alice_black += tmp;

            n -= a[i];
            i++;
            tracker++;
        }
        else
        {
            if (b[j] > n)
            {
                if (n % 2 == 0)
                {
                    int tmp = n / 2;
                    bob_white += tmp;
                    bob_black += tmp;
                }
                else
                {
                    int tmp = n / 2;
                    bob_white += tmp;
                    bob_black += tmp + 1;
                }
                break;
            }

            int tmp = b[j] / 2;
            bob_white += tmp;
            bob_black += tmp + 1;
            n -= b[j];
            j++;
            tracker++;
        }
        idx++;
    }
    cout << alice_white << " " << alice_black << " " << bob_white << " " << bob_black << endl;
}

int32_t main()
{
    FastIO;
    int idx = 0;
    for (int i = 1; i <= 1000000; i += 4)
    {
        if (idx % 2 == 0)
        {
            a.pb(i);
        }
        else
        {
            b.pb(i);
        }
        idx++;
    }
    // TxtIO;
    int tt;
    tt = 1;
    cin >> tt;
    while (tt--)
    {
        sol();
    }
}