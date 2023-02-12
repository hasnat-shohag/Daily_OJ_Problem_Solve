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
void calculator(int sum){
    v.pb(sum);
    if(sum > 1e9+100) return;
    calculator(sum * 10 + 4);
    calculator(sum * 10 + 7);
}

void sol()
{
   int l,r;cin>>l>>r;
   int sum = 0;
   while(l<=r){
        int idx = lower_bound(all(v),l)- v.begin();
        int target = v[idx];
        int tmp;
        if(target > r){
            tmp = (r-l+1) * target;
            sum += tmp;
            break;
        }else{
            tmp = (target - l + 1)*target;
            sum += tmp;
            l = target+1;
        }
   }
    cout << sum << endl;
}

int32_t main()
{
    FastIO;
    calculator(0);
    sort(all(v));
    //TxtIO;
    int tt;
    tt = 1;
    //cin >> tt;
    while (tt--)
    {
        sol();
    }
}