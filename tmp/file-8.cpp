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
int main () {

}