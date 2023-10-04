#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fori(i, n) for(int i = 0; i < n; i++)
#define all(a) a.begin(), a.end()
#define double long double
bool can(int i, int j, int n) {
    if (i >= 0 && i < n && j >= 0 && j < 5) {
        if ((i == 0 && j == 2) || (i == n / 2 && j == 0) || (i == n / 2 && j == 2) ||(i==n/2 && j==4) || (i == n - 1 && j == 2)) {
            return false;
        }
        return true;
    }
    return false;
}
signed main() {
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int qoq;
    cin >> qoq;
    while (qoq--) {
        int cnt;
        cin >> cnt;
    int l = 3, r = 10000;
        while (l + 1 < r) {
            int n = (l + r) / 2;
            vector<vector<int>> dp(n, vector<int>(5));
            dp[0][0] = 1;
            fori(i, n) {
                fori(j, 5) {
                    if (can(i - 1, j, n)) dp[i][j] += dp[i - 1][j];
                    if (can(i, j - 1, n)) dp[i][j] += dp[i][j - 1];
                }
            }
            if (dp[n - 1][4] >= cnt) {
                r = n;
            } else {
                l = n;
            }
        }    
    }
}