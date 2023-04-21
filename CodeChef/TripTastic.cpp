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
vector<vector<int>>arr;
vector<vector<int>>pre;
int k;
int r,c;

bool chk(int mid){
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            int c1,c2,r1,r2; int zero = 0; 
            c1 = max(i-mid, zero);
            c2 = max(j-mid, zero);
            r1 = min(i+mid, r-1);
            r2 = min(j+mid, c-1);
            int sum = (pre[r1][r2] - (c2 - 1 >= 0 ? pre[r1][c2-1] : 0) - (c1 - 1 >= 0 ? pre[c1-1][r2] : 0) + (c1 -1 >= 0 && c2-1 >= 0 ? pre[c1-1][c2-1] : 0)); 
            if(sum > k && (arr[i][j])){
                return true;
            }
        }
    }
    return false;
}
void sol()
{
    cin>>r>>c>>k;
    int sum = 0;

    arr.resize(r);
    for (int i = 0; i < r; ++i)
        arr[i].resize(c);

    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            cin>>arr[i][j];
            sum += arr[i][j];
        }
    }
    if(sum < k+1){
        cout << -1 << endl;
        return;
    }
    // prefix sum 
    pre.resize(r);
    for (int i = 0; i < r; ++i)
        pre[i].resize(c);

    pre[0][0] = arr[0][0];

    for(int i = 1; i<c; i++){
        pre[0][i] = pre[0][i-1]+arr[0][i];
    }
    for(int i = 1; i<r; i++){
        pre[i][0] = pre[i-1][0]+arr[i][0];
    }

    for(int i = 1; i<r; i++){
        for(int j = 1; j<c; j++){
            pre[i][j] = pre[i][j-1]+pre[i-1][j] + arr[i][j] - pre[i-1][j-1];
        }
    }    
   
    int ans = LLONG_MAX;
    int l = 0, h = max(r,c);
    while(l<=h){
        int mid = (l+h)/2;
        if(chk(mid)){
            h = mid - 1;
            ans = mid;
        }else{
            l = mid+1;
        }
    }
    cout << ans << endl;

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