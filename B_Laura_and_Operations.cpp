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

//!________________________Algorithm__________________________________
//? customized sieve for prime factorization upto 1e6
vector<int>low(1e6); 
void sieve(){ int n = 1e6; for(int i = 2; i<=n; i++){ low[i] = i;} for(int i = 2; i*i <= n; i++){ if(low[i] == i){for(int j =  i*i; j<= n; j += i){if(low[j] == j){ low[j] = i; }}}}}
//? Sieve upto 1e8
vector<int> vec; int N = 100000009;
vector<bool> prime(N + 1, 1);
void SieveOfEratosthenes(){ prime[0]=prime[1] = 0; for(int i = 4; i<N; i+=2){ prime[i] = 0;} for (int p = 3; p * p <= N; p += 2){ if (prime[p]) { for (int i = p * p; i <= N; i += p) prime[i] = 0; }} vec.pb(2); for (int i = 3; i < N; i+=2){ if (prime[i]){ vec.push_back(i);}}}
vector<int>prime_fact(int x){ vector<int>res; while (x > 1) { res.push_back(low[x]); x /= low[x]; } return res; }
//? DSU template 
vector<int>par; vector<int>_rank;
int find(int x){ if(par[x] < 0) return x; return par[x] = find(par[x]); }
void _union(int x, int y){ x = find(x); y = find(y); if(x == y) return; if(_rank[x] > _rank[y]){ _rank[x] += _rank[y]; par[y] = x; } else{ _rank[y] += _rank[x]; par[x] = y; }}
//! _________________Function_______________
int nPr(int n, int r){ if (r > n / 2) r = n - r; int result = 1; for (int i = 1; i <= r; ++i) { result *= n - i + 1;} return result; }
int nCr(int n, int r){ if (r > n / 2) r = n - r; int result = 1; for (int i = 1; i <= r; ++i) { result *= n - i + 1; result /= i; } return result; }
int Ceil(int a, int b){return (a + b - 1) / b;}
int pow(int a, int b){ int res = 1; while (b){ if(b&1){ res *= a; res %= mod; b--;} a *= a; a %= mod; b /= 2; } return res;}
//! _________________template______________

template<typename T> istream& operator >> (istream &istream, vector<T> &v) {for (auto &it : v) cin >> it; return istream;}
template <typename T> ostream& operator<<(ostream &os, const vector<T> &v) {for (auto e : v){os << e << " ";}return os;}

void sol(int tc)
{
  vector<int>v(3); cin>>v;

  if(v[0] == v[1] and v[1] == v[2]){
    cout << 1<<" "<<1<< " "<<1<<endl;
    return;
  }
  set<pair<int,int> >st;
  for(int i = 1; i<=3; i++){
    st.insert({v[i-1], i});
  }
  int total = -1; 
  for(int i = 0; i<3; i++) total += v[i];
  while (total--)
  {
    auto it1 = st.begin();
    auto it2 = ++st.begin();
    auto it3 = st.begin();
    advance(it3, 2);
    
    pair<int,int>p;
    set<pair<int,int>>st2;
    p.ff = it3->ff - 1;
    p.ss = it3->ss;
    st2.insert(p);
    p.ff = it2->ff - 1;
    p.ss = it2->ss;
    st2.insert(p);
    p.ff = it1->ff + 1;
    p.ss = it1->ss;
    st2.insert(p);

    st = st2;
  }
  vector<bool>b(5);
  for(auto it: st){
    if(it.ff > 0) b[it.ss] = true;
  }
  for(int i = 1; i<= 3; i++){
    if(b[i]) cout << 1<<" ";else cout <<0 <<" ";
  }
  cout << endl;
}
//? Before Submit handle the case for 0 and 1
int32_t main()
{
    FastIO;
    //TxtIO;
    int tt;
    tt = 1;
    cin >> tt;
    for(int i = 1; i<= tt; i++)
    {
        sol(i);
    }
}