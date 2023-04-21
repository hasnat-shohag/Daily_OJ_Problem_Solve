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
    int p = (n*(n-1))/2;    
    int q = p / n;
    string s = "";
    if(q*n == p) {
        cout <<"YES"<<endl;
        int noOfOne = q;
        for(int i = 0; i<n; i++){
            // zero
            for(int k = 0; k<i+1; k++){
                s += '0';
            }
            int cnt = 0;
            for(int j = i+1; j<n && cnt < noOfOne; j++){
                s += '1';
                cnt++;
            }
            if(s.size() != n){
                for(int l = s.size(); l<n; l++){
                    s += '0';
                }
            }
            if(cnt != noOfOne){
                int idx = 0;
                for(int l = cnt; l<noOfOne; l++){
                    s[idx] = '1';
                    idx++;
                }
            }
            cout << s << endl;
            s = "";
        }

    }
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