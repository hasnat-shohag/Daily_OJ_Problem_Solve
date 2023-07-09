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
//_________________Function_______________
int nPr(int n, int r){ if (r > n / 2) r = n - r; int result = 1; for (int i = 1; i <= r; ++i) { result *= n - i + 1;} return result; }
int nCr(int n, int r){ if (r > n / 2) r = n - r; int result = 1; for (int i = 1; i <= r; ++i) { result *= n - i + 1; result /= i; } return result; }
int Ceil(int a, int b){return (a + b - 1) / b;}
int pow(int a, int b){ int res = 1; while (b){ if(b&1){ res *= a; b--;} a *= a; b /= 2; } return res;}
//_________________template______________

template<typename T> istream& operator >> (istream &istream, vector<T> &v) {for (auto &it : v) cin >> it; return istream;}
template <typename T> ostream& operator<<(ostream &os, const vector<T> &v) {for (auto e : v){os << e << " ";}return os;}

void sol()
{
    int n;cin>>n;
    char arr[n+1][n+1];
    f1(i,n){
        f1(j,n){
            cin>>arr[i][j];
        }
    }

    // 1st row
    int temp = arr[1][1];
// 1st row
    for(int i = 2; i<= n; i++){
        int val = arr[1][i];
        arr[1][i] = temp;
        temp = val;
    }
// last col
    for(int i = 2; i<=n; i++){
        int val = arr[i][n];
        arr[i][n] = temp;
        temp = val;
    }

// last row
    for(int i = n-1; i>=1; i--){
        int val = arr[n][i];
        arr[n][i] = temp;
        temp = val;
    }

// 1st col
    for(int i = n-1; i>=1; i--){
        int val = arr[i][1];
        arr[i][1] = temp;
        temp = val;
    }

    f1(i,n){
        f1(j,n){
           cout << arr[i][j];
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
    // cin >> tt;
    while (tt--)
    {
        sol();
    }
}