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
    int n,m;cin>>n>>m;
    string a,b;cin>>a>>b;

    int top = m-1;
    int c_a = 0; int c_b = 0;
    int idx_1 = 0;
    for(int i = 0; i<n-1; i++){
        if(a[i] == a[i+1]){
            c_a++;
            if(idx_1 == 0){
                idx_1 = i+1;
            }
        }
    }
    int idx_2 = 0;
    for(int i = 0; i<m-1; i++){
        if(b[i] == b[i+1]){
            c_b++;
            if(idx_2 == 0) idx_2 = i+1;
        }
    }
    // cout << idx_1<<" "<<idx_2<<endl;
    if(idx_1 != 0){
        // cout <<"Ko[]";
        for(int i = n-1; i>=idx_1; i--){
            b.push_back(a[i]);
            a.pop_back();
        }
    }
    else if(idx_2 != 0){
        for(int i = m-1; i>=idx_2; i--){
            a.push_back(b[i]);
            b.pop_back();
        }
    }
    // cout <<a <<endl;
    for(int i = 0; i<(int)a.size()-1; i++){
        if(a[i] == a[i+1]){
            cout <<"NO"<<endl;
            return;
        }
    }
    for(int i = 0; i<(int)b.size()-1; i++){
        if(b[i] == b[i+1]){
            cout <<"NO"<<endl;
            return;
        }
    }
    cout <<"YES"<<endl;
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