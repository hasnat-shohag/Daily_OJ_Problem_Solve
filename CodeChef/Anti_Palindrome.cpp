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
    string s;cin>>s;
    map<char,int>mp;

    f0(i,n){
        mp[s[i]]++;
    }    
    if(mp.size() == 1){
        if(n % 2 == 0){
            cout << 1 << endl;
        }
        else{
            cout << 2 << endl;
        }
        return;
    }
    int j = 0,b=0;
    for(auto it:mp){
        if(it.ss & 1){
            b++;
        }else{
            j++;
        }
    }
    if(b == 0 || b == 1){
        if(mp.size() == 26){
            cout << 2 << endl;
        }else{
            cout << 1 << endl;
        }
        return;
    }
    cout << 0 << endl;
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