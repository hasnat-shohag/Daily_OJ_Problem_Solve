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

void sol()
{
    int n;
    cin >> n;
    map<string, string> m;
    map<string, int> mbg;
    map<string, int> mbd;
    string s;
    while (n--)
    {
        char a;
        while(1){
            cin>>a;
            s.pb(a);
            if(a == '-' || a == '+'){
                break;
            }
        }
        cout <<s << endl;
        string d =""; d+=s[0]; d+=s[1];
    
          string bal=""; bal+=s[3];
             bal+=s[4];
        string y="";
        for(int i=6;i<10;i++) y+=s[i];        // string h = s.substr(11, 2);
        string mi=""; mi+=s[14];
        mi+=s[15];
        string h=""; h+=s[11];
        h+=s[12];
         string se =""; se+=s[17]; se+=s[18];
                 // cout<<d<<bal<<y<<endl;
        // int t=stoll(y)*365*24*60*60;
        // t += stoll(m)*

        string id = "";
        for (int i = 20; i < 50; i++)
        {
            if (s[i] == ' ')
                break;
            id += s[i];
        }
        string db ="";
        for(int i=51;i<55;i++) db+=s[i];
        int sz = s.size();
        string bg = "";
        bg += s[sz - 2] + s[sz - 1];
        string fi = y + bal + d + h + mi + se;
        if (m[id] < fi)
             m[id] = fi;
        cout<<fi<<endl;
        s.clear();
    }
}
// Before Submit handle the case for 0 and 1
int32_t main()
{
    FastIO;
    // TxtIO;
    int tt;
    tt = 1;
    //  cin >> tt;
    while (tt--)
    {
        sol();
    }
}