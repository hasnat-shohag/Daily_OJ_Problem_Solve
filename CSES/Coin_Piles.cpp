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
    int a,b; cin>>a>>b; 
    if(max(a,b) > min(a,b)*2){
        cout <<"NO"<<endl;
        return;
    }
    if(a%3 == 0 && b % 3 == 0){
        cout<<"YES"<<endl; return; 
    }
    if((a%3 == 1 && b%3 == 2) || (a%3 ==2 && b%3 == 1 )){
        cout <<"YES"<<endl; return;
    }
    cout <<"NO"<<endl; 
}

int32_t main(){
    FastIO;
    int tt;
    tt = 1;
    cin>>tt;
    while(tt--){
        sol();
    }
}