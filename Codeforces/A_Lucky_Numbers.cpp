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
    int l,r;cin>>l>>r;

    int gap = r - l;
    if(gap >= 100){
        for(int i = l; i<=l+100; i++){
            int mn = 0, mx = 0; int temp = i;
            while(temp>0){
                int a = temp % 10;
                temp /= 10;
                if(a == 0) mn =1;
                if(a == 9) mx = 1;
            }
            if(mn == 1 && mx == 1){
                cout << i << endl;
                return;
            }
        }
    }    
    else{
        int ans = -5;
        int out;
        for(int i = l; i<=r; i++){
            int mn = 10, mx = -1; int temp = i;
            while(temp>0){
                int a = temp % 10;
                temp /= 10;
                mn = min(mn, a);
                mx = max(mx, a);
            }
            int res = mx - mn;
            if(res>ans){
                out = i;
                ans = res;
            }
        }
        cout << out << endl;
    }
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