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

void sol(int tc)
{
    int n;cin>>n;
    vector<int>res;
    res.pb(n);
    set<int>st;
    
    while(n != 1){
        st.insert(1);
        if(n == 7){
            res.pb(6);
            res.pb(4);
            res.pb(2);
            res.pb(1);
            break;
        }
        for(int i = 2; i*i <= n; i++){
            if(n % i == 0){
                st.insert(i);
                st.insert(n/i);
            }
        }
        if(st.size() == 1){
            n -= 1;
            res.pb(n);
            // cout <<"ok";
        }else{
            // cout <<"ok2";
            int idx = *st.rbegin();

            int temp = n - idx;
            int cnt = 0;
            for (int i = 2; i*i <= temp; i++)
            {
                if(temp % i == 0){
                    cnt++;
                }
            }
            if(cnt != 0 || temp < 6){
                n = temp;
                res.pb(n);
            }else{
                auto it = st.end();
                --it; --it;
                n -= *it;
                res.pb(n);
            }
        }
        st.clear();
    }
    cout << res.size()<<endl;
    cout << res << endl;
}
//Before Submit handle the case for 0 and 1
int32_t main()
{
    FastIO;
    //TxtIO;
    int tt;
    tt = 1;
    cin >> tt;
    for(int i = 1; i<= tt; i++)
    {
        sol(i);
    }
}