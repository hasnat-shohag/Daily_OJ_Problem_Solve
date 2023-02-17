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
vector<int>v;
void sol()
{
    int n;cin>>n;   
    if(n < 6) cout<<"impossible"<<endl;
    else{
        int l = 0; int r = 100;
        int mid;
        while(l < r) {
            // mid = r + (r-l)/2;
            mid = (l+r)/2;
            if(v[mid] < n)
                l = mid+1;
            else 
                r = mid;
        }
        int idx = r;
        cout << v[idx-4]<<" "<<v[idx-3]<<" "<<v[idx-1]<<endl;
    } 
}
//Before Submit handle the case for 0 and 1
int32_t main()
{
    FastIO;
    v.pb(0);v.pb(1);
    for(int i = 2; i<100; i++){
        v.pb(v[i-1]+v[i-2]);
    }
    // cout<<v<<endl;
    //TxtIO;
    int tt;
    tt = 1;
    cin >> tt;
    while (tt--)
    {
        sol();
    }
}