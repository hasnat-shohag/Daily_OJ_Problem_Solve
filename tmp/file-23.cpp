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