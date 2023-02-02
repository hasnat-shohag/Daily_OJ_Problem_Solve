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
    // cout << (1 << n) << endl;
    v.pb("0");
    v.pb("1");
    for(int i = 2; i <= n; i++){
        for(int j = (int)v.size() - 1; j>=0; j--){
            v.pb(v[j]);
        }
        int k;
        for(k = 0; k<(int)v.size()/2; k++){
            v[k] = "0"+v[k];
        }
        for(int l = k; l<v.size(); l++){
            v[l] = "1"+v[l];
        }

    }
    for(int i = 0; i<v.size(); i++){
        cout << v[i]<<endl;
    }
}

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