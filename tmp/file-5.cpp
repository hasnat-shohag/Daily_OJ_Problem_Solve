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
int main() {

}