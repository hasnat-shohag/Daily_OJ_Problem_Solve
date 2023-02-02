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
    int n;cin>>n;
    if(n == 1){
        cout <<1<<endl;
        return;
    }
    if(n < 4){
        cout <<"NO SOLUTION"<<endl;
        return;
    }
    if(n % 2){
        int p = n;
        while(p>0){
            cout <<p<<" ";
            p -= 2;
        }
        n--;
        while(n>1){
            cout << n<<" ";
            n -= 2;
        }
        cout << endl;
    }else{
        int p = n;
        n--;
        while(n>0){
            cout << n<<" ";
            n -= 2;
        }
        while(p>1){
            cout <<p<<" ";
            p -= 2;
        }
        cout << endl;
    }
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