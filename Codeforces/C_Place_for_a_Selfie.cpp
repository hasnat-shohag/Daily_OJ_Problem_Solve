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
    int n,m;cin>>n>>m;
    vector<int>straightLine(n);
    for(int i = 0; i<n; i++){
        cin>>straightLine[i];
    }
    sort(all(straightLine));

    while(m--){
        int a,b,c;cin>>a>>b>>c;
        auto it= lower_bound(all(straightLine), b);
        if(it == straightLine.end()){
            --it;
        }
        // cout <<*it<<endl;
        int bbb = b;
        b = (b-*it)*(b-*it);
        int det = b - 4*a*c;
        auto p = it;
        int det2 = 1;
        int bb;
        if(*p != *straightLine.begin()){
            --p;
            // cout << *p<<" "<<b << endl;
            bb = (bbb-*p)*(bbb-*p);
            det2 = bb - 4*a*c;
        }
        // cout << *it<<" "<<*p<<endl;
        // cout << det <<" "<<det2<<endl;
        if(det2<0){
            cout <<"YES"<<endl;
            cout << *p<<endl;
        }else if(det < 0){
            cout<<"YES"<<endl;
            cout << *it << endl;
        }
        else{
            cout <<"NO"<<endl;
        }
    }
        cout << endl;

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