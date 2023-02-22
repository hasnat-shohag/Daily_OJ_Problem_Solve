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
    int n, q;cin>>n>>q;
    map<int,int>m;
    vector<int>v;
    for(int i = 0; i<n; i++){
        v.pb(i+1);
        m[i+1] = i+1;
    }
    // cout << v<< endl;
    for(int i = 0; i<q; i++){
        int a;cin>>a;
        if(a == 1){
            int l,r;cin>>l>>r; 
            int con = r-l+1;
            int idx = 1;
            int k = 0;
            for(int j = l-1; k < con/2; j++){
                // cout << j<<" - " << r-idx<<endl;
                m[v[r-idx]] = j+1;
                m[v[j]] = r-idx+1;
                swap(v[j], v[r-idx]);
                // cout << v[r-idx]<<" "<<j+1<<endl;
                idx++;
                k++;
            }
            // cout << v << endl;
            // for(auto it:m)cout<<it.ff<<" "<<it.ss<<endl;
        }else{
            int p;cin>>p;
            if(a == 2)cout<<v[p-1]<<endl;
            else{
                cout << m[p]<<endl;
            }
        } 
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