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
int Ceil(int a, int b){return (a + b - 1) / b;}
//_________________template______________

template<typename T> istream& operator >> (istream &istream, vector<T> &v) {for (auto &it : v) cin >> it; return istream;}
template <typename T> ostream& operator<<(ostream &os, const vector<T> &v) {for (auto e : v){os << e << " ";}return os;}

void sol()
{
    int n,k;cin>>n>>k;
    map<int, int>m1;
    map<int, int>m2;  

    vector<string>a(n),b(n);
    f0(i,n){
        cin>>a[i];
    }
    f0(i,n){
        cin>>b[i];
    }
    
    f0(i,n){
        if(a[i].size() != b[i].size()){
            cout << "NO"<<endl;
            return;
        }
    } 
    f0(i,n){
        for(int j = 0; j<a[i].size(); j++){
            m1[a[i][j]]++;
        }
    }
    f0(i,n){
        for(int j = 0; j<a[i].size(); j++){
            m2[b[i][j]]++;
        }
    }
    int cost = 0;
    for(auto it:m2){
        int temp = it.ss - m1[it.ff];
        if(temp > 0) cost += temp;
    }
    // cout << cost << endl;
    if(k >= cost) cout <<"YES"<<endl;
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