#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.length();
        int ans = 0, cnt = 1;
        for (int i = 1; i < n; i++) {
            if (s[i] == s[i-1]) {
                cnt++;
            } else {
                if (cnt > ans && cnt % 2 == 0 && s.substr(i-cnt, cnt/2) == s.substr(i-cnt/2, cnt/2)) {
                    ans = cnt;
                }
                cnt = 1;
            }
        }
        if (cnt > ans && cnt % 2 == 0 && s.substr(n-cnt, cnt/2) == s.substr(n-cnt/2, cnt/2)) {
            ans = cnt;
        }
        cout << ans << endl;
    }
    return 0;
}
