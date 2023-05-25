#include <bits/stdc++.h>
#define int long long
using namespace std;

void Do_Solve(){
    int n,mx=0,indx=1; cin>>n;
    int a[n];

    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i]>mx && i>0){
           mx=a[i]; indx=i;
        }
    }
    if(n==1){
        cout<<a[0]<<"\n"; return;
    }
    for(int i=indx; i<n; i++)cout<<a[i]<<" ";
    if(indx!=n-1){
        cout<<a[indx-1]<<" "; indx-=2;
    }
    else indx--;
    for(int i=indx; i>0; i--){
        if(a[i]>=a[0])cout<<a[i]<<" ";
        else{
             break;
        }
        indx=i-1;
    }
    for(int i=0; i<=indx; i++)cout<<a[i]<<" ";
    cout<<"\n";

}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int go=1; cin>>go;
    while (go--){
        Do_Solve();
    }
    return 0;
}
