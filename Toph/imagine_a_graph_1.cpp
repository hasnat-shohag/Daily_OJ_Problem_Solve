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
int nPr(int n, int r){ if (r > n / 2) r = n - r; int result = 1; for (int i = 1; i <= r; ++i) { result *= n - i + 1;} return result; }
int nCr(int n, int r){ if (r > n / 2) r = n - r; int result = 1; for (int i = 1; i <= r; ++i) { result *= n - i + 1; result /= i; } return result; }
int Ceil(int a, int b){return (a + b - 1) / b;}
int pow(int a, int b){ int res = 1; while (b){ if(b&1){ res *= a; b--;} a *= a; b /= 2; } return res;}
//_________________template______________

template<typename T> istream& operator >> (istream &istream, vector<T> &v) {for (auto &it : v) cin >> it; return istream;}
template <typename T> ostream& operator<<(ostream &os, const vector<T> &v) {for (auto e : v){os << e << " ";}return os;}

vector<int>low(1e6); 
void sieve(){
    int n = 1e6;
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
    vector<int>res;
    while (x > 1)
    {
        res.push_back(low[x]);
        x /= low[x];
    }
    return res;
}
void sol(int tc){
    int a,b;cin>>a>>b;
    vector<int>va = prime_fact(a);
    vector<int>vb = prime_fact(b);

    bool flag1 = false, flag2 = false;

    if(va.size() == 1 || (va.size() == 2 and va[0] != va[1])){
        flag1 = true;
    }
    if(vb.size() == 1 || (vb.size() == 2 and vb[0] != vb[1])){
        flag2 = true;
    }
    if(flag1 and flag2){
        cout <<"Yes"<<endl;
    }else cout <<"No" << endl;
}
//Before Submit handle the case for 0 and 1
int32_t main()
{
    FastIO;
    int tt;
    //TxtIO;
    sieve();
    tt = 1;
    // cin >> tt;
    for(int i = 1; i<= tt; i++)
    {
        sol(i);
    }
}