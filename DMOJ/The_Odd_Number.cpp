#include <stdio.h>

void sol()
{
    int n;
    scanf("%d", &n);
    int p;
    scanf("%d", &p);
    int res = p;
    for (int i = 1; i < n; i++)
    {
        int op;
        scanf("%d", &op);
        res ^= op;
    }

    // f0(i,n)cout << v[i]<<" ";cout << endl;

    printf("%d\n", res);
}

int main()
{
    // TxtIO;
    int tt;
    tt = 1;
    // cin >> tt;
    while (tt--)
    {
        sol();
    }
}