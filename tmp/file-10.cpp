#include <iostream>
#include <cstdio>

using namespace std;
const int MAX_N = 10000005;
const int MOD = 1000000007;
int test, num;int inv[MAX_N];int PHI[MAX_N], lp[MAX_N];int powers[MAX_N];int dp[MAX_N];
void add(int &a, int b) {
    a += b;
    if (a >= MOD) a -= MOD;
}
int pow(int a, int b) {
    if (b == 0) return 1 % MOD;if (b & 1) return 1LL * a * pow(a, b - 1) % MOD; int half = pow(a, b >> 1);return 1LL * half * half % MOD;
}
int inverse(int a) {
    if (inv[a] != 0) return inv[a];return inv[a] = pow(a, MOD - 2);
}
template<class T> void fast(T n){
    if(n == 0){ puts("0"); return;}
    char buffer[256]; int ptr = 0, sign = 1;if(n < 0){  sign = -1;  n *= -1; }
    while(n > 0){buffer[ptr ++] = (char)(n % 10 + '0');n /= 10;}
    if(sign == -1)  putchar('-');
    for(int i = ptr - 1; i >= 0; i --)  putchar(buffer[i]); putchar('\n');
}
template <class T> void fastInput(T &n){
    char ch;int sign = 1;while(ch = getchar(), isspace(ch)) {} n = 0;
    if(ch == '-')   sign = -1;
    else n = ch - '0';while(ch = getchar(), isdigit(ch)) n = (n << 3) + (n << 1) + ch - '0';n *= sign;
}
int main () {
    PHI[1] = 1;for (int i = 2; i < MAX_N; i ++) { if (!lp[i]) { for (int j = i; j < MAX_N; j += i) lp[j] = i;}} for (int i = 2; i < MAX_N; i ++) {
        int j = i / lp[i];if (j % lp[i] == 0) PHI[i] = PHI[j] * lp[i];else PHI[i] = PHI[j] * (lp[i] - 1);}
    powers[0] = 1; for (int i = 1; i < MAX_N; i ++) {powers[i] = (powers[i - 1] << 1) % MOD; }
    for (int i = 1; i < MAX_N; i ++) {for (int j = i; j < MAX_N; j += i) { add(dp[j], 1LL * PHI[i] * powers[j / i] % MOD); }
    }
}