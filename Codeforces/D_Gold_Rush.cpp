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

void sol()
{
    int n,m;cin>>n>>m;
    if(n < m){
        cout <<"NO"<<endl;
        return;
    }
    set<int>st;
    map<int,int>mp;
    st.insert(n);
    mp[n]++;
    while(st.size()){
        auto it = st.end();
        --it;
        int val = *it; 
        // cout << val<<">"<<endl;
        for(int i = 1; i*i<=val; i++){
            if(val % i == 0){
                int temp = i * 2;
                int tmp = val/i;

                if(temp + i == val){
                    // cout << temp << " "<<i<<endl;
                    st.insert(temp);
                    st.insert(i);
                    mp[temp]++;
                    mp[i]++;
                    break;
                }
                int temp2 = tmp * 2;

                if(temp2 + tmp == val){
                    // cout << temp << " "<<i<<endl;
                    st.insert(temp2);
                    st.insert(tmp);
                    mp[temp2]++;
                    mp[tmp]++;
                    break;
                }
            }
        }
        st.erase(it);

    }
    if(mp[m]){
        cout <<"YES"<<endl;
    }else cout <<"NO"<<endl;
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