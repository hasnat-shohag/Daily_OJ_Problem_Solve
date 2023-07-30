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

void sol()
{
    int n;cin>>n;
    vi v(n); cin>>v;

    int cntp = 0;
    int cntn = 0;
    for(int i = 0; i<n; i++){
        if(v[i] <= 0){
            cntn++;
        }
        if(v[i] >= 0){
            cntp++;
        }
    }

    // vector<pair<int, int>>res;
    vector<int>a, b;

    if(cntp == n){
        for(int i = 1; i<n; i++){
            // res.pb({i+1, i});
            a.pb(i+1);
            b.pb(i);
        }   
    }
    else if(cntn == n){
        for(int i = n-2; i>= 0; i--){
            // res.pb({i+1, i+2});
            a.pb(i+1);
            b.pb(i+2);
        }

    }else{

        if(v[0] < 0){
            int idx = 0;
            for(int i = 0; i<n; i++){
                if(v[i] > 0){
                    idx = i;
                    break;
                }
            }

            while(v[idx] <= (-1*(v[0]))){
                v[idx] *= 2;
                // res.pb({idx+1, idx+1});
                a.pb(idx+1);
                b.pb(idx+1);
            }

            v[0] += v[idx];
            // res.pb({1, idx+1});
            a.pb(1);
            b.pb(idx+1);
        }

        for(int i = 1; i<n; i++){
            if(v[i]>=0){
                v[i] += v[i-1];
                // res.pb({i+1, i});
                a.pb(i+1);
                b.pb(i);
            }
            else{
                while(v[i-1] <= (-1*(v[i]))){
                    v[i-1] *= 2;
                    // res.pb({i,i});
                    a.pb(i);
                    b.pb(i);
                }

                v[i] += (2*v[i-1]);
                // res.pb({i+1, i});
                // res.pb({i+1, i});
                a.pb(i+1);
                b.pb(i);
                a.pb(i+1);
                b.pb(i);
            }
        }
    }

    cout << a.size()<<endl;
    for(int i = 0; i<a.size(); i++){
        cout << a[i]<<" "<<b[i]<<endl;
    }
    // cout << v << endl;
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