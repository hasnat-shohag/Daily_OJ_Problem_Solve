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
#define ff first
#define ss second
#define int long long
#define INF 1000000000
#define mod 1000000007
int Ceil(int a, int b){return (a + b - 1) / b;}
//_________________template______________

template <typename T> // printByVectorName
ostream& operator<<(ostream &os, const vector<T> &v) {for (auto e : v){os << e << " ";}return os;}

void sol()
{
    int n;cin>>n;
    vi v(n);

    int sum = 0;
    int cnt = 0;
    int mn = LLONG_MAX;
    f0(i,n){
        cin>>v[i];
        if(v[i] < 0) cnt++;
        if(v[i] < 0){
            int a = v[i]*-1;
            mn = min(mn, a);
        }else{
            mn = min(mn, v[i]);
        }
    }

    if(cnt % 2 == 0){
        int ans = 0;
        for(int i = 0; i<n; i++){
            if(v[i] < 0){
                ans += (v[i] * -1);
            }else ans += v[i];
        }
        cout << ans << endl;
    }else{
        int ans = 0;
        for(int i = 0; i < n; i++){
            if(v[i] < 0){
                ans += (v[i] * -1);
            }else ans += v[i];
        }
        ans -= (2*mn);
        cout << ans << endl;
    }
}

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