#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve(){
    ll n,x; cin>>n>>x;
    vector<ll> v(n);
    for(ll i=0;i<n;i++) cin>>v[i];
    ll ct=0,ct2=0;
    bool flag=true,boom=false;
    ll index=-1;
    for(ll i=0;i<30;i++){
        ct=0;
        ct2=0;
        for(ll j=0;j<n;j++){
            if(v[j] & (1 << i)){
                ct++;
            }else{
                ct2++;
            }
        }
        if((ct!=0 && ct2!=0) ){
            if(flag){
                if(x & (1<<i)){
                    index=i;
                    // x = x & ~(1 << i);
                    flag=false;
                }
            }
        }
        if(ct!=0 && ct2!=0 ){
            if(x & (1<<i)){
                continue;
            }else{
                boom=true;
                cout<<x<<'\n';
                return;
            }
        }
    }
    x = x & ~(1 << index);    
    for(ll i=0;i<index;i++){
        x = x | (1 << i);
    }
    cout<<x<<'\n';
} 

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t=1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}