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
    string s1,s2;cin>>s1>>s2;
    int n, t, number;
    char ch1,ch2;
    cin>>n;
    set<pair<int, pair<string,int>>>st; // time , Team name, number
    map<int, int>mp1,mp2; // number 
    

    f0(i,n){
        cin>>t>>ch1>>number>>ch2;
        if(ch1 == 'h'){
            if(ch2 == 'r' && mp1[number] >= 0){
                mp1[number] = -100000;
                pair<string, int> innerPair(s1, number);
                pair<int, pair<string, int>> valuePair(t, innerPair);
                st.insert(valuePair);
            }
            mp1[number]++;
            if(mp1[number] == 2){
                pair<string, int> innerPair(s1, number);
                pair<int, pair<string, int>> valuePair(t, innerPair);
                st.insert(valuePair);
                mp1[number] = -100000;
            }
        }else{
            if(ch2 == 'r' && mp2[number]>=0){
                mp2[number] = -100000;
                pair<string, int> innerPair(s2, number);
                pair<int, pair<string, int>> valuePair(t, innerPair);
                st.insert(valuePair);
            }
            mp2[number]++;
            if(mp2[number] == 2){
                pair<string, int> innerPair(s2, number);
                pair<int, pair<string, int>> valuePair(t, innerPair);
                st.insert(valuePair);
                mp2[number] = -100000;
            }
        }
    }
    for(auto it:st){
        cout << it.ss.ff<<" "<<it.ss.ss<<" "<<it.ff<<endl;
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