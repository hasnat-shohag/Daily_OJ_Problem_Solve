#include <bits/stdc++.h>
using namespace std;
int n;
long long ans, a[500005];
int main()
{
    cin >> n;
	cin >> a[1] >> a[2];
	for (int i = 3; i <= n; i++)
	{
		cin >> a[i];
		while (a[i - 1] <= a[i - 2] && a[i - 1] <= a[i])
			ans += min(a[i - 2], a[i]), n--, a[i - 1] = a[i], i--;
	}
    sort(a + 1, a + n + 1);
    for (int i = 1; i <= n - 2; i++)
		ans += a[i];
    cout << ans;
    return 0;
}