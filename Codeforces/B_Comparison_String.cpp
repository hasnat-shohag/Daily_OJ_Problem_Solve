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

void sol()
{
    int n;cin>>n;
    set<int>st;
    string s;cin>>s;

    // int x = 1000000;

    // st.insert(x);
    // for(int i = 0; i<n; i++){
    //     if(s[i] == '<'){
    //         ++x;
    //         st.insert(x);
    //     }else{
    //         --x;
    //         st.insert(x);
    //     }
    // }
    // cout<<st.size()<<endl;

    int mx = -11111111111;
    int cnt1 = 0;
    int cnt2 = 0;
    for(int i = 0; i<n; i++){
        if(s[i] == '<'){
            cnt1++;
            mx = max(mx, cnt1);
            cnt2 = 0;
        }else{
            cnt2++;
            mx = max(mx, cnt2);
            cnt1 = 0;
        }
    }
    cout << mx + 1 << endl;
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