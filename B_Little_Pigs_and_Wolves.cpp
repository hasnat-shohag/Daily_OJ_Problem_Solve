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
    int r,c;cin>>r>>c;
    char arr[r+1][c+1];
    f0(i,r){
        f0(j,c){
            cin>>arr[i][j];
        }
    }
    int res = 0;
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            if(arr[i][j] == 'P'){
                if(i + 1 < r && arr[i+1][j] == 'W'){
                    arr[i+1][j] = '.';
                    arr[i][j] = '.';
                    res++;
                    continue;
                }
                if(i - 1 >= 0 && arr[i-1][j] == 'W'){
                    arr[i-1][j] = '.';
                    arr[i][j] = '.';
                    res++;
                    continue;
                }
                if(j - 1 >= 0 && arr[i][j-1] == 'W'){
                    arr[i][j-1] = '.';
                    arr[i][j] = '.';
                    res++;
                    continue;
                }
                if(j + 1 < c && arr[i][j+1] == 'W'){
                    arr[i][j+1] = '.';
                    arr[i][j] = '.';
                    res++;
                    continue;
                }
            }
        }
    }
    cout << res << endl;
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