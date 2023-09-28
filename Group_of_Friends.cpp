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
// #define int long long
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

const int MAX_N = 100001;
int parent[MAX_N];

int find(int x) {
    if (parent[x] == x)
        return x;
    return parent[x] = find(parent[x]);
}

void unite(int x, int y) {
    x = find(x);
    y = find(y);
    if (x != y)
        parent[y] = x;
}

int main() {
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 1; i <= MAX_N; i++) {
        parent[i] = i;
    }

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
        for (int j = 2; j * j <= x; j++) {
            if (x % j == 0) {
                unite(j, x);
                unite(x / j, x);
            }
        }
    }

    int distinct_groups = 0;
    vector<bool> is_representative(MAX_N, false);

    for (int i = 0; i < n; i++) {
        if (!is_representative[find(v[i])]) {
            is_representative[find(v[i])] = true;
            distinct_groups++;
        }
    }

    cout << distinct_groups << endl;
    return 0;
}
