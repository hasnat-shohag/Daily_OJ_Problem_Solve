#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,t;cin>>n>>t;
    vector<int>v(n);
    for(int i = 0; i<n; i++){
        cin>>v[i];
    }
    int cnt = 0;
    int total = 0;
    for(int i = 0; i<n; i++){
        total += (86400-v[i]);
        cnt++;
        if(total >= t){
            cout << cnt << endl;
            return 0;
        }
    }
}