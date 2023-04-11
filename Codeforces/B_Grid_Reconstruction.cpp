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
    int n;cin>>n;
    int arr[3][n+1];
    int a = 2*n-1;

    for(int i = 1; i<=n; i+=2){
        arr[1][i] = a;
        a -= 2;
    }    
    a = 1;

    for(int i = 2; i<=n; i+=2){
        arr[1][i] = a;
        a += 2;
    }  

    for(int i = 1; i< n; i++){
        arr[2][i] = arr[1][i+1]+1;
    }
    arr[2][n] = n*2;

    for(int i = 1; i<3; i++){
        for(int j = 1; j<=n; j++){
            cout << arr[i][j]<<" ";
        }
        cout << endl;
    }
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