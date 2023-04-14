#include<bits/stdc++.h>
using namespace std;

int main(){
    int r,c;cin>>r>>c;
    vector<vector<int>>arr(r, vector<int>(c));
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            cin>>arr[i][j];
        }
    }
    // prefix sum 
    vector<vector<int>>pre(r, vector<int>(c));
    pre[0][0] = arr[0][0];

    for(int i = 1; i<c; i++){
        pre[0][i] = pre[0][i-1]+arr[0][i];
    }
    for(int i = 1; i<r; i++){
        pre[i][0] = pre[i-1][0]+arr[i][0];
    }

    for(int i = 1; i<r; i++){
        for(int j = 1; j<c; j++){
            pre[i][j] = pre[i][j-1]+pre[i-1][j] + arr[i][j] - pre[i-1][j-1];
        }
    }
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            cout << pre[i][j]<<" ";
        }cout<<endl;
    }
    
}