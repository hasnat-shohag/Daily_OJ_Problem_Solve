#include <bits/stdc++.h>
using namespace std;

#define FastIO ios_base::sync_with_stdio(0), cin.tie(0)
#define TxtIO  freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define f0(i, n) for (int i = 0; i < n; i++)
#define f1(i, n) for (int i = 1; i <= n; i++)
#define f2(i, n) for (int i = 1; i < n; i++)
#define endl "\n"
#define sqrt sqrtl
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

template<typename T> istream& operator >> (istream &istream, vector<T> &v) {for (auto &it : v) cin >> it; return istream;}
template <typename T> ostream& operator<<(ostream &os, const vector<T> &v) {for (auto e : v){os << e << " ";}return os;}

void sol()
{
    int n,k;cin>>n>>k;

    if(k == 0){
        for(int i = 0; i<n; i++){
            cout << -1<<" ";
        }cout<<endl;
        return;
    }

    int x = 0;
    int low = 1;
    int high = n;
    
    while(low <= high){
        int mid = (low+high)/2;

        int cal = (mid*(mid+1))/2;
            // cout<<mid<<endl;
        if(cal <= k){
            x = mid;
            low = mid+1;
        }else{
            high = mid-1;
        }
    }
    // cout << x<<endl;
    int totx = (x*(x+1))/2;
    int ex = k - totx;
    // cout << ex << endl;
    for(int i = 1; i<=n; i++){
        if(i <= x){
            cout << 2 <<" ";
        }
        else if(i == x+1){
            if(ex == 0){
                cout << -1000<<endl;
            }else{
                cout << -(((x-ex+1)*2)-1)<<" ";
            }
        }else{
            cout << -1000<<" ";
        }
    }cout << endl;
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