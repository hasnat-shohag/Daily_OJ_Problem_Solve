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
    string s;cin>>s;
    int c = count(all(s), '*');
    if(c == n || c == 0 || c == 1){
        cout << 0 <<endl;
        return;
    }

    s = "#"+s;
    vector<int>v;
    for(int i = 1; i<=n; i++){
        if(s[i] == '*')
            v.pb(i);
    }

    int mid = v[v.size()/2];
    // cout << mid << endl;
    int bam = -1;
    int dan = -1;
    for(int i = mid-1; i>= 1; i--){
        if(s[i] == '.'){
            bam = i;
            break;
        }
    }

    for(int i = mid+1; i<= n; i++){
        if(s[i] == '.'){
            dan = i;
            break;
        }
    }

    int cnt = 0;
    if(bam != -1){
        int pos = bam;
        for(int i = bam; i>= 1; i--){
            if(s[i] == '*'){
                cnt += (pos - i);
                pos--;
            }
        }
    }
    if(dan != -1){
        int pos = dan;
        for(int i = dan; i<= n; i++){
            if(s[i] == '*'){
                cnt += (i - pos);
                pos++;
            }
        }
    }

    mid = v[(v.size()/2)-1];

    int cnt2 = 0;
    bam = -1;
    dan = -1;
    for(int i = mid-1; i>= 1; i--){
        if(s[i] == '.'){
            bam = i;
            break;
        }
    }

    for(int i = mid+1; i<= n; i++){
        if(s[i] == '.'){
            dan = i;
            break;
        }
    }

    if(bam != -1){
        int pos = bam;
        for(int i = bam; i>= 1; i--){
            if(s[i] == '*'){
                cnt2 += (pos - i);
                pos--;
            }
        }
    }
    if(dan != -1){
        int pos = dan;  
        for(int i = dan; i<= n; i++){
            if(s[i] == '*'){
                cnt2 += (i - pos);
                pos++;
            }
        }
    }
    int res = min(cnt, cnt2);
    cout << res <<endl;
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