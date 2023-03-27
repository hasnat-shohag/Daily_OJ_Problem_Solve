#include <bits/stdc++.h>
using namespace std;

#define FastIO ios_base::sync_with_stdio(0), cin.tie(0)
#define TxtIO  freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define f0(i, n) for (int i = 0; i < n; i++)
#define f1(i, n) for (int i = 1; i <= n; i++)
#define f2(i, n) for (int i = 1; i < n; i++)
#define endl "\n"
#define pb push_back
// #define mp make_pair
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
    int m;cin>>m;
    map<int,int>mp;   
    vector<vector<int>>v(m); 
    int idx = 0;
    for(int k = 0; k<m; k++){
        int n;cin>>n;
        for(int i = 0; i<n; i++){
            int a;cin>>a;
            mp[a]++;
            v[idx].pb(a);
        }
        idx++;
    }
    vector<int>res;

    for(int k = 0; k<m; k++){
        bool flag = false;
        for(int i = 0; i<v[k].size(); i++){
            if(mp[v[k][i]] == 1 && flag == false){
                res.pb(v[k][i]);
                mp[v[k][i]]--;
                flag = true;
            }
            else if(mp[v[k][i]]){
                mp[v[k][i]]--;
            }
        }
    }
    if(res.size() != m){
        cout <<-1 <<endl;
        return;
    }
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
    while (tt--)
    {
        sol();
    }
}