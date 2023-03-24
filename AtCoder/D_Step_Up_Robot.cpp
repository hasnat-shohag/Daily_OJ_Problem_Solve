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
    int n;cin>>n;
    vector<int>v(n);
    cin>>v;
    int m;cin>>m;
    vector<int>b(m);
    cin>>b;

    int x;cin>>x;

    vector<int>dp(x+1,0);
    dp[0] = 1;
    map<int,int>map;
    for(int i = 0; i<m; i++){
        map[b[i]]++;
    }

    for(int i = 1; i<x+1; i++){
        if(map[i] == 0){
            for(int j = 0; j<n; j++){
                // check if not possible make it index to zero
                if(i - v[j] < 0){
                    dp[i] = 0;
                    break;
                }
                if(dp[i - v[j]] == 1){
                    dp[i] = 1;
                    break;
                }
            }
        }
    }
    if(dp[x] == 1) cout <<"Yes"<<endl;
    else cout <<"No"<<endl;
}
//Before Submit handle the case for 0 and 1
int32_t main()
{
    FastIO;
    //TxtIO;
    int tt;
    tt = 1;
    // cin >> tt;
    while (tt--)
    {
        sol();
    }
}