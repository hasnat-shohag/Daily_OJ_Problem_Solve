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

}