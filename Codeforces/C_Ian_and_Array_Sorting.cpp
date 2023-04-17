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
int Ceil(int a, int b){return (a + b - 1) / b;}
//_________________template______________

template<typename T> istream& operator >> (istream &istream, vector<T> &v) {for (auto &it : v) cin >> it; return istream;}
template <typename T> ostream& operator<<(ostream &os, const vector<T> &v) {for (auto e : v){os << e << " ";}return os;}

void sol()
{
    int n;cin>>n;
    vi v(n); int mx = 0;
    f0(i,n){
        cin>>v[i];
        mx = max(mx, v[i]);
    }
    if(n & 1){
        cout <<"YES"<<endl;
        return;
    }
    if(n == 2){
        if(v[0] > v[1]){
            cout << "NO"<<endl;
        }else cout <<"YES"<<endl;
        return;
    }
    for(int i = n-1; i>0; i--){
        if(i+1 < n && v[i]>v[i+1]){
            v[i-1] -= (v[i] - mx);
            v[i] = mx;
        }
        else if(v[i] < v[i-1]){
            v[i-1] += (mx-v[i]);
            v[i] = mx;
            // cout << mx - v[i] <<endl;
        }
    // cout << v << endl;
    }    
    if(is_sorted(all(v))) cout <<"YES"<<endl;
    else cout <<"NO"<<endl;
}
//Before Submit handle the case for 0 and 1
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