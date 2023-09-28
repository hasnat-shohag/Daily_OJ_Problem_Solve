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
    string s;cin>>s;

    vector<string>c = {"blue", "green", "yellow", "red", "purple", "orange", "pink", "grey", "cyan", "brown", "ash", "silver", "gold", "white", "black"};
    map<char, int>mp;
    for(int i = 0; i<s.size(); i++){
        mp[s[i]]++;
    }
    // sort(all(c));
    // cout << c << endl;
    // return;
    int res = 0;

    for(int i = 0; i<c.size(); i++){
        bool flag = true;
        int cnt = 0;
        for(int j = 0; j<c[i].size(); j++){
            if(mp[c[i][j]]>0){
                cnt++;
            }
        }
        if(cnt == c[i].size()){
            res++;
            for(int j = 0; j<c[i].size(); j++){
                mp[c[i][j]]--;
            }
        }
    }
    // for(auto it:mp){
    //     if(it.ss>0)
    //     cout << it.ff <<" "<<it.ss<<endl;
    // }
    cout << res <<endl;
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