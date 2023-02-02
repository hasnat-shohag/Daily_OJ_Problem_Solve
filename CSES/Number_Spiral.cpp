#include <bits/stdc++.h>
using namespace std;

#define FastIO ios_base::sync_with_stdio(0), cin.tie(0)
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

void sol()
{
    int row, col;
    cin >> row >> col;
    int res;
    if (col >= row)
    {
        if (col % 2 == 0)
        {
            int start = (col - 1)*(col - 1) + 1;
            res = start + row - 1;
        }
        else
        {
            int start = col * col;
            res = start - row + 1;
        }
    }
    else
    {
        if (row % 2)
        {
            int start = (row-1) * (row-1) + 1;
            res = start + col - 1;
        }
        else
        {
            int start = row*row;
            res = start - col + 1;
        }
    }
    cout << res << endl;
}

int32_t main()
{
    FastIO;
    int tt;
    tt = 1;
    cin >> tt;
    while (tt--)
    {
        sol();
    }
}