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
    int n,k;cin>>n>>k;
    int sum = 0;
    vi v(n);
    f0(i,n){
        cin>>v[i];
        sum += v[i];
    }
    sort(all(v));
    int cnt = 0;
    int fk = 0;
    int bk = n-1;
    int element = n;
    for(int i = 0; i<k; i++){
        int temp = v[fk]+v[fk+1];

        if(element >= 6 && i + 1 < k){
            temp += v[fk+2]+v[fk+3];
            if(temp > v[bk]+v[bk-1]){
                cnt += v[bk]+v[bk-1];
                bk -= 2;
                element -= 2;
                i++;
            }else{
                cnt += v[fk]+v[fk+1];
                element -= 2;
                fk += 2;
            }
        }
        else{
            if(temp < v[bk]){
                cnt += temp;
                fk += 2;
                element -= 2;
            }else{
                cnt += v[bk];
                bk--;
                element--;
            }
        }
    }
    // cout << cnt << endl;
    cout << sum - cnt << endl;
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