#include<bits/stdc++.h>
using namespace std;

#define FastIO ios_base::sync_with_stdio(0), cin.tie(0)
#define f0(i,n)  for(int i = 0; i<n; i++)
#define f1(i,n)  for(int i = 1; i<=n; i++)
#define f2(i,n)  for(int i = 1; i<n; i++)
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
int Ceil(int a, int b) { return (a+b-1)/b; }
int binaray_exp(int a, int b)
{
    int res = 1;
    while (b)
    {
        if(b&1){
            res *= a;
            res %= mod;
            b--;
        }
        a *= a;
        a %= mod;
        b /= 2;
    }
    return res;
}
void sol()
{
    int n;cin>>n;
    int res = binaray_exp(2,n);
    cout << res << endl;
}

int32_t main(){
    FastIO;
    int tt;
    tt = 1;
    // cin>>tt;
    while(tt--){
        sol();
    }
}