#include <bits/stdc++.h>
using namespace std;

#define FastIO ios_base::sync_with_stdio(0), cin.tie(0)
#define TxtIO  freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
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
int Ceil(int a, int b){return (a + b - 1) / b;}
//_________________template______________

template <typename T> // printByVectorName
ostream& operator<<(ostream &os, const vector<T> &v) {for (auto e : v){os << e << " ";}return os;}

void sol()
{
    int r,c;cin>>r>>c;
    int arr[r+1][c+1];
    for(int i = 1; i<=r; i++){
        for(int j = 1; j<=c; j++){
            cin>>arr[i][j];
        }
    }    
    vector<int>v;
    for(int i = 0; i<r-1; i++){
        v.push_back(0);
    }
    for(int i = 0; i<c-1; i++){
        v.push_back(1);
    }

    int cnt = 0;

    do{
        set<int>st;
        st.insert(arr[1][1]);
        int x = 1; int y = 1;        
        for(int i = 0; i<v.size(); i++){
            if(v[i] == 0){
                ++x;
                st.insert(arr[x][y]);
            }else{
                ++y;
                st.insert(arr[x][y]);
            }
        }
        if(st.size() == (r+c-1)){
            cnt++;
        }
        st.clear();
    }while(next_permutation(all(v)));
    cout << cnt << endl;
}
//Before Submit handle the case for 0 and 1
int32_t main()
{
    FastIO;
    //TxtIO;
    int tt;
    tt = 1;
    // cin >> tt;
    while (tt--)
    {
        sol();
    }
}