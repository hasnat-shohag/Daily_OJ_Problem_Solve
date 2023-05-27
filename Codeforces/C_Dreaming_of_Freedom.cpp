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
#define f first
#define sc second
#define int long long
#define INF 1000000000
int Ceil(int a, int b) { return a/b+(a%b != 0); }

vector<int>low(1e6); 
void sieve(){
    int n = 1e6;
    for(int i = 2; i<=n; i++){
        low[i] = i;
    }

    for(int i = 2; i*i <= n; i++){
        if(low[i] == i){
            for(int j =  i*i; j<= n; j += i){
                if(low[j] == j){ 
                    low[j] = i;
                }
            }
        }
    }
}
void sol()
{
    int n;int k;cin>>n>>k;
    if(n == 1 || k == 1){
        cout << "YES"<<endl;
        return;
    }
    int p = low[n];
    if(p<=k){
        cout <<"NO"<<endl;
    }else{
        cout <<"YES"<<endl;
    }
}

int32_t main(){
    FastIO;
    sieve();
    //TxtIO;
    int tt;
    tt = 1;
    cin >> tt;
    while (tt--)
    {
        sol();
    }
}