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
#define ff first
#define ss second
#define int long long
#define INF 1000000000
#define mod 1000000007
int Ceil(int a, int b){return (a + b - 1) / b;}
//_________________template______________

template <typename T> // printByVectorName
ostream& operator<<(ostream &os, const vector<T> &v) {for (auto e : v){os << e << " ";}return os;}

void sol()
{
    int n;cin>>n;
    vector<string>v;
   
    for(int i = 0; i<(2*n - 2); i++){
        string a;cin>>a;
        v.pb(a);
    }
    string p,q;
    int temp = 0;
    for(int i = 0; i<(2*n-2);i++){
        if(v[i].size() == n-1 && temp == 0){
            p = v[i];
            temp = 1;
        }
        else if(v[i].size() == n-1 && temp == 1){
            q = v[i];
            temp = 2;
        }
    }
    reverse(all(p));
    if(p == q){
        cout <<"Yes"<<endl;
    }else cout <<"No"<<endl;
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