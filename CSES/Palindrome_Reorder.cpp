#include<bits/stdc++.h>
using namespace std;

#define FastIO ios_base::sync_with_stdio(0), cin.tie(0)
#define f0(i,n)  for(int i = 0; i<n; i++)
#define f1(i,n)  for(int i = 1; i<=n; i++)
#define f2(i,n)  for(int i = 1; i<n; i++)
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
int Ceil(int a, int b) { return (a+b-1)/b; }

void sol()
{
    string s;
    cin>>s;
    map<char,int>m;
    for(int i = 0; i<s.size(); i++){
        m[s[i]]++;
    }
    int cnt = 0;
    char ch = '0';
    for(auto it:m){
        if(it.ss % 2 != 0){
            cnt++;
            ch = it.ff;
        }
        if(cnt > 1){
            cout <<"NO SOLUTION"<<endl;
            return;
        }
    }
    string v1,v2,v3;

    if(cnt == 1){
        // int len = m[ch];
        for(int i = 0; i<m[ch]; i++){
            v2.pb(ch);
        }
    }
    for(auto it:m){
        int len = it.ss;
        if(it.ff == ch){
            continue;
        }
        for(int i = 0; i<len/2; i++){
            v1.pb(it.ff);
        }
    }
    cout << v1;
    reverse(all(v1));
    cout <<v2<<v1<<endl; 
}

int32_t main(){
    FastIO;
    int tt;
    tt = 1;
    // cin>>tt;
    while(tt--){
        sol();
    }
}