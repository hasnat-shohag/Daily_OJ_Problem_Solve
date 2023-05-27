#include <bits/stdc++.h>
using namespace std;

#define FastIO ios_base::sync_with_stdio(0), cin.tie(0)
#define TxtIO  freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define f0(i, n) for (int i = 0; i < n; i++)
#define f1(i, n) for (int i = 1; i <= n; i++)
#define f2(i, n) for (int i = 1; i < n; i++)
#define endl "\n"
#define pb push_back
//#define mp make_pair
#define vi vector<int>
#define pi pair<int, int>
#define all(x) x.begin(), x.end()
#define sqrt sqrtl
#define ff first
#define ss second
#define int long long
#define INF 1000000000
#define mod 1000000007
//_________________Function_______________
int Ceil(int a, int b){return (a + b - 1) / b;}
int pow(int a, int b){ int res = 1; while (b){ if(b&1){ res *= a; b--;} a *= a; b /= 2; } return res;}
//_________________template______________

template<typename T> istream& operator >> (istream &istream, vector<T> &v) {for (auto &it : v) cin >> it; return istream;}
template <typename T> ostream& operator<<(ostream &os, const vector<T> &v) {for (auto e : v){os << e << " ";}return os;}
vector<int>low(1e7+1); 
void sieve(){
    int n = 1e7;
    for(int i = 2; i<=n; i++){
        low[i] = i;
    }

    for(int i = 2; i*i <= n; i++){
        if(low[i] == i){
            for(int j =  i*i; j<= n; j += i){
                if(low[j] == j){ 
                    low[j] = i;
                }
            }
        }
    }
}

vector<int>prime_fact(int x){
    vector<int>ans;
    while (x > 1)
    {
        ans.push_back(low[x]);
        x /= low[x];
    }
    return ans;
}
void sol()
{
    int n;cin>>n; vi v(n); cin>>v;
    map<int,int>mp;

    for(int i = 0; i<n; i++){
        vector<int>a;
        a = prime_fact(v[i]);
        for(auto x: a){
            mp[x]++;
        }
    }

    int res = 0; int rem = 0;
    for(auto it:mp){
        int p = (it.ss/2);
        res += p;
        rem += it.ss % 2;
    }
    res += rem / 3;
    cout << res << endl;
}
//Before Submit handle the case for 0 and 1
int32_t main()
{
    FastIO;
    //TxtIO;
    sieve();
    int tt;
    tt = 1;
    cin >> tt;
    while (tt--)
    {
        sol();
    }
}
