#include <bits/stdc++.h>
using namespace std;
void sol(int TC)
{
    int n,m,h;cin>>n>>h;
    cin>>m;
	vector<int>v(n);
    int extra_hour = 0;
    for(int i = 0; i<n; i++){
        cin>>v[i];
        v[i] -= h;
        if(v[i] > 0){
            extra_hour += v[i];
        }
    }
    int g,p;cin>>g>>p;
    float unit_gift = (float)g / extra_hour;
    vector<float>res(n, 0);
    for(int i = 0; i<n; i++){
        if(v[i] > 0){
            res[i] = unit_gift * v[i];
        }
    }
    printf("Case #%lld: %.3lf\n", TC,res[p]);
}

int main()
{
	
	return 0;
}