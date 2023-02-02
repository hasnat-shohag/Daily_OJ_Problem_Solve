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
    int n;
    cin >> n;

    int res = (n * (n + 1)) / 2;
    if (res % 2)
    {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    res /= 2;
    // cout << res <<endl;
    int sum = 0;
    vi a,b;

    int i = 1, j = n;

    for(;j>=n/2;){
        sum += j;

        if(sum > res){
            sum -= j;
            break;
        }
        a.pb(j);
        j--;
    }

    // cout << sum << endl;

    int gap = res - sum;
    if(gap != 0)
        a.pb(gap);

    for(int k = i; k<= j; k++){
        if(k == gap) continue;
        b.pb(k);
    }

    cout << a.size()<<endl;
    for(auto it:a)cout << it <<" ";cout << endl;

    cout << b.size()<<endl;
    for(auto it:b)cout << it <<" ";cout << endl;

}

int32_t main()
{
    FastIO;
    int tt;
    tt = 1;
    // cin>>tt;
    while (tt--)
    {
        sol();
    }
}