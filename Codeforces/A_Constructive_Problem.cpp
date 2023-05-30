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
int Ceil(int a, int b){return (a + b - 1) / b;}
int pow(int a, int b){ int res = 1; while (b){ if(b&1){ res *= a; b--;} a *= a; b /= 2; } return res;}
//_________________template______________

template<typename T> istream& operator >> (istream &istream, vector<T> &v) {for (auto &it : v) cin >> it; return istream;}
template <typename T> ostream& operator<<(ostream &os, const vector<T> &v) {for (auto e : v){os << e << " ";}return os;}

int find_mex(set<int>st){
    int mex = 0;
    for(auto it:st){
        if(it == mex){
            mex++;
        }else{
            break;
        }
    }
    return mex;
}
void sol()
{
    int n;cin>>n;
    vi v(n);
    set<int>st;
    for(int i = 0; i<n; i++){
        cin>>v[i];
        st.insert(v[i]);
    }

    int mex = find_mex(st);

    if(st.find(mex+1) == st.end()){
        if(n >= mex+1){
            cout <<"YES"<<endl;
        }else{
            cout <<"NO"<<endl;
        }
        return;
    }
    int start = -1; int end = -1;
    for(int i = 0, j = n-1; i<n;i++, j--){
        if(v[i] == mex+1 && start == -1){
            start = i;
        }
        if(v[j] == mex+1 && end == -1){
            end = j;
        } 
        if(start != -1 && end != -1){
            break;
        }
    }
    for(int i = start; i<= end; i++){
        v[i] = mex;
    }
    set<int>st2;

    for(int i = 0; i<n; i++){
        st2.insert(v[i]);
    }
    int mex2 = find_mex(st2);

    if(mex2 == mex+1){
        cout <<"YES"<<endl;
    }else {
        cout <<"NO"<<endl;
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