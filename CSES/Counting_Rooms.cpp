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
vector<vector<int>>vis;
vector<string>adj;

void sol()
{
    int n,m;cin>>n>>m;
    adj.resize(n);
    vis.resize(n, vector<int>(m));

    f0(i,n){
        cin>>adj;
    }    
    int cnt = 0;
    stack<pair<int,int>>st;

    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if(!vis[i][j] && adj[i][j] == '.'){
                st.push({i,j});
                while (st.size())
                {
                    int a = st.top().first;
                    int b = st.top().second;
                    st.pop();   
                    
                    vis[a][b] = 1;

                    if(a + 1 < n && !(vis[a+1][b]) && adj[a+1][b] == '.') {
                        st.push({a+1, b});
                    }
                    if(b + 1 < m && !(vis[a][b+1]) && adj[a][b+1] == '.'){
                        st.push({a, b+1});
                    }
                    if(b - 1 >= 0 &&  !(vis[a][b-1]) && adj[a][b-1] == '.'){
                        st.push({a, b-1});
                    }
                    if(a - 1 >= 0 &&  !(vis[a-1][b]) && adj[a-1][b] == '.'){
                        st.push({a-1, b});
                    }
                }
                cnt++;
            }
        }
    }
    cout << cnt << endl;
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