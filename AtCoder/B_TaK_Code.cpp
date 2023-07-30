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
    int n,m;cin>>n>>m;
    vector<string>s(n);
    for(int i = 0; i<m; i++){
        cin>>s[i];
    }
    vector<pair<int,int>>res;

    string a,d;
    a = "###.", d = "....";

    string e,h;
    e = "....", h = ".###";

    for(int i = 0; i<=n-9; i++){
        for(int j = 0; j<=m-9; j++){
            // proti ghor er jnno check krte hbe
            int cnt = 0;
            int kto = 1;
            for(int k = i; k<i+4; k++){
                string kop = "";
                for(int l = j; l <j+4; l++){
                    kop += s[k][l];
                }

                if(kto < 4){
                    if(kop == a){
                        cnt++;
                    }
                }else{
                    if(kop == d){
                        cnt++;
                    }
                }
                kto++;
            }
            // cout << cnt << endl;
            int cnt2 = 0;
            if(cnt == 4){
                int kto = 1;
                // +5 theke 4 ta ghor gunbe
                for(int o = i+5; o < i+9; o++){
                    string kop = "";
                    for(int p = j + 5; p < j+9; p++){
                        kop += s[o][p];
                    }
                    if(kto == 1){
                        if(kop == e){
                            cnt2++;
                        }
                    }
                    else{
                        if(kop == h){
                            cnt2++;
                        }
                    }
                    kto++;  
                }
            }
            if(cnt2 == 4){
                res.pb({i+1, j+1});
            }
        }
    }
    sort(all(res));

    for(int i = 0; i<res.size(); i++){
        cout << res[i].ff<<" "<<res[i].ss<<endl;
    }
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