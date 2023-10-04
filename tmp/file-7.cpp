#include <iostream>
#include <vector>
#include <map>
using namespace std;
#define ULL unsigned long long
int n, k, m;
map<ULL, vector<int>> mape;vector<string> x;vector<int> b;bool ans[50];
bool flag = false;ULL xx[50];ULL bb;
void dfs1(int pos, vector<int>  &choice) {
    if (choice.size() > k / 2)   return; ULL key = 0;for (int j : choice) key ^= xx[j];mape[key] = choice;
    for (int i = pos; i < m; i++) {
        choice.push_back(i); dfs1(i + 1, choice); choice.pop_back();}
}
void dfs2(int pos, vector<int>& choice) {
    if (choice.size() > (k + 1) / 2) return; ULL key = 0;for (int j : choice) key ^= xx[j];key ^= bb;
    if (mape.find(key) != mape.end()) {vector<int> choix = mape[key];flag = true;for (int i = 0; i < m; i++) ans[i] = 0;for (int i : choice) ans[i] = !ans[i];for (int i : choix) ans[i] = !ans[i]; return;}
    for (int i = pos; i < m; ++i) { choice.push_back(i);dfs2(i + 1, choice);choice.pop_back();if (flag) return;}
}
int main() {
  cin >> n >> k;x.resize(n);b.resize(n);for (int i = 0; i < n; i++) cin >> x[i] >> b[i];m = x[0].length();
    for (int j = 0; j < m; j++) {xx[j] = 0; for (int i = 0; i < n; i++){ xx[j] <<= 1; xx[j] ^= x[i][j] - '0'; }}
    bb = 0;for (int i = 0; i < n; i++) { bb <<= 1; bb ^= b[i];}vector<int> choice;
    dfs1(0, choice);choice.clear();dfs2(0, choice);
    if (flag) { int cnt = 0; for (int i = 0; i < m; ++i)cnt += ans[i];cout << cnt << endl;
        for (int i = 0; i < m; ++i) { if (ans[i])  cout << i << " "; } cout << endl;} else { cout << -1 << endl; }return 0;
}