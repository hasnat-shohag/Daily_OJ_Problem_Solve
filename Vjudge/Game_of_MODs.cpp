#include <bits/stdc++.h>
using namespace std;

#define FastIO ios_base::sync_with_stdio(0), cin.tie(0)
#define TxtIO                         \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define f0(i, n) for (int i = 0; i < n; i++)
#define f1(i, n) for (int i = 1; i <= n; i++)
#define f2(i, n) for (int i = 1; i < n; i++)
#define endl "\n"
#define pb push_back
#define mp make_pair
#define vi vector<int>
#define pi pair<int, int>
#define all(x) x.begin(), x.end()
#define ff first
#define ss second
#define int long long
#define INF 1000000000
#define mod 1000000007
int Ceil(int a, int b)
{
    return (a + b - 1) / b;
}
//_________________template______________

template <typename T> // printByVectorName
ostream &operator<<(ostream &os, const vector<T> &v)
{
    for (auto e : v)
    {
        os << e << " ";
    }
    return os;
}

void sol(int tc)
{
    int n;
    cin >> n;
    int q;
    cin >> q;

    vi v;
    string s;
    s = to_string(n);
    // cout <<s << endl;
    // return;

    for (int i = 0; i < s.size(); i++)
    {
        int a = s[i] - '0';
        v.pb(a);
    }
    // cout << v<< endl;
    // return;
    int len = v.size();
    cout << "Case " << tc << ':' << endl;
    while (q--)
    {
        int digit;
        cin >> digit;

        int mn = LLONG_MAX;
        int mx = -1;
        if (digit == 0)
        {
            cout << n << " "<< n<<endl;
        }
        else
        {
            for (int i = 1; i < (1 << len); i++)
            {   
                int no_set_bit = 0;
                int p = i;
                while (p > 0)
                {
                    no_set_bit++;
                    p = p & (p - 1);
                }
                vector<int> vc;
                vc = v;
                if (no_set_bit == digit)
                {
                    int ls = 1;

                    for (int j = 0; j < len; j++)
                    {
                        if (ls & i)
                        {   
                            vc[j] = -1;
                        }
                        ls <<= 1;
                    }
                    string ts = "";
                    for (int k = 0; k < len; k++)
                    {
                        if (vc[k] != -1)
                        {
                            ts += vc[k] + '0';
                        }
                    }

                    int kop;
                    
                    if(ts == ""){
                        kop = 0;
                    }
                    else{
                        kop = stoll(ts);
                    }
                    mn = min(mn, kop);
                    mx = max(mx, kop);
                }
            }
            cout << mx << " "<<mn<<endl;
        }    
    }
}

int32_t main()
{
    FastIO;
    // TxtIO;
    int tt;
    tt = 1;
    cin >> tt;
    for (int i = 1; i <= tt; i++)
    {
        sol(i);
    }
}