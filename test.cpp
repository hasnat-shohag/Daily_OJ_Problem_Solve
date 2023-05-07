#include<bits/stdc++.h>
using namespace std;
#define FastIO ios_base::sync_with_stdio(false); cin.tie(0)
#define ll long long
#define all(x) (x).begin(),(x).end()
#define no cout<<"NO"<<endl
#define yes cout<<"YES"<<endl
#define ff first
#define ss second
template<class T> void print(T& a) { for(auto x:a)cout<<x<<" "; cout<<"\n";}

//let a =  [from x in lines[i].split("")select int(x)];
void machine(int tc)
{
    ll n;
    cin>>n;
    vector<ll>a(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
        
    }
    sort(all(a));
    ll pre = -1;
    ll truth = 0;
    ll preval = 0;
    for (ll i=0;i<n;i++){
        if(a[i]==pre){
            truth++;
            preval = a[i];
        }
        else if(n- truth<a[i]&&n-truth>=preval){
            cout<<n - truth<<endl;
            return;
        }
        else{
            pre = a[i];
            truth++;
            preval = a[i];
        }
    }
 if(a[n-1]==0)cout<<0<<endl;
   else
   cout<<-1<<endl;
}

int main()
{
    FastIO;
    int t=1;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
       machine(i);
    }
}  