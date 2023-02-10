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
	vi a,b,c; //-+0 
	int cnt =0;
	vi v(n); 
    int p = 0;
    int nn = 0;
    f0(i,n){
        cin>>v[i];
        if(v[i] < 0) nn++;
        else if(v[i]>0) p++;
    }
    if(p == 0){
        int e = 0;
        int f = 0;
        f0(i,n){
            if(e < 2 && v[i] < 0){
                b.pb(v[i]);
                e++;
                continue;
            }
            if(v[i] < 0 && nn % 2 == 0 && f == 0){
                c.pb(v[i]);
                f++;
                continue;
            }
            if(v[i] == 0){
                c.pb(v[i]);
            }else{
                a.pb(v[i]);
            }
        }
        cout << a.size()<<" "<<a<<endl;
        cout << b.size()<<" "<<b<<endl;
        cout << c.size()<<" "<<c<<endl;
    }
    else{
        int e = 0;
        int f = 0;
        f0(i,n){
            if(v[i] < 0 && nn % 2 == 0 && f == 0){
                c.pb(v[i]);
                f++;
                continue;
            }
            if(v[i] > 0){
                b.pb(v[i]);
            }
            else if(v[i] == 0){
                c.pb(v[i]);
            }else{
                a.pb(v[i]);
            }
        }
        cout << a.size()<<" "<<a<<endl;
        cout << b.size()<<" "<<b<<endl;
        cout << c.size()<<" "<<c<<endl;
    }
}

int32_t main()
{
    FastIO;
    //TxtIO;
    int tt;
    tt = 1;
    //cin >> tt;
    while (tt--)
    {
        sol();
    }
}