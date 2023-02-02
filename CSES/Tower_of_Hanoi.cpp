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
vector<pair<int,int>>v;

void tower_of_hanoi(int n, int from_rod, int to_rod, int aux_rod){
    if(n == 0){
        return;
    }
    tower_of_hanoi(n-1, from_rod, aux_rod, to_rod);
    v.pb({from_rod, to_rod});
    tower_of_hanoi(n-1, aux_rod, to_rod, from_rod);
}

void sol()
{
    int n;cin>>n;
    tower_of_hanoi(n, 1 , 3, 2);
    cout << v.size()<<endl;
    for(auto it:v){
        cout << it.ff<<" "<<it.ss<<endl;
    }
}

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