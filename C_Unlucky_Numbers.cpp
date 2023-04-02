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
            int temp = i;
            vector<int>tmp;
            while(temp>0){
                int a = temp % 10;
                temp /= 10;
                if(a == 0){
                    tmp.pb(1);
                }
            }
            if(tmp.size()>1){
                cout << i << endl;
                return;
            }
        }
    }    
    else{
        int ans = LLONG_MAX;
        int out;
        if(l<10 || r < 10){
            
        }
        for(int i = l; i<=r; i++){
            int temp = i;
            vector<int>tmp;

            while(temp>0){
                int a = temp % 10;
                temp /= 10;
                tmp.pb(a);
            }
            // cout << tmp << endl;
            if(tmp.size()==1){
                tmp.pb(tmp[0]);
            }
            sort(all(tmp));
            int res = tmp[1] - tmp[0];
            if(res<ans){
                out = i;
                ans = res;
            }
            tmp.clear();
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