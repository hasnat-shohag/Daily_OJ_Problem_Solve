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
    int n,k;cin>>n>>k;
    string s;cin>>s;
    set<char>st;
    f0(i,n) st.insert(s[i]);
    if(st.size() == 1){
        for(int i = 0; i<k-1; i++){
            s += s[0];
        }
        cout << s << endl;
        return;
    }
    string ss = s; // copy of original

    int idx = -1;
    string strr = "";
    for(int i = 0; i<n/2; i++){
        strr += s[i];
        string str = strr;
        reverse(all(str));

        // cout << strr <<" "<<str<<endl;
        int l = str.size();
        bool flag = true;
        int k = 0;
        for(int j = n-1; j>=n/2; j--){
            if(str[k] != s[j]){
                flag = false;
            }
            k++;
            if(k == l){
                break;
            }
        }
        if(flag){
            idx = str.size();
        }
    }
    string rep = "";
    for(int i = idx; i<n; i++){
        rep += s[i];
    }
    if(idx == -1){
        rep = s;
    }

    for(int i = 0; i<k-1; i++){
        s += rep;
    }
    // repeatation check
    string repeat = "";
    string sub = "";
    // sub += ss[0];
    for(int i = 0; i<=n/2; i++){
        sub += ss[i];
        int l = sub.size();
        int c = 0; 
        int cnt = 0;
        for(int j = 0; j<n; j+= l){
            string p = ss.substr(j, l);
            // cout << p<< " "<<sub << endl;
            if(p == sub){
                cnt++;
                // cout << cnt << endl;
            }
            // for(int k = j; k<j+l; k++){
            //     if(sub[k] == ss[k]){
            //         cnt++;
            //     }
            // }
            if(cnt*l == n){
                c++;
                repeat = sub;
                
                for(int i = 0; i<k-1; i++){
                    ss += repeat;
                }
                cout << ss << endl;

                return;
            }
        }
    }
    cout << s << endl;
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