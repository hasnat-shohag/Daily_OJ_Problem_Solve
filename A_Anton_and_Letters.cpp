#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);

    set<char>st;
    for(int i = 0; i<s.size(); i++){
        if(s[i] >= 97 && s[i] <= 122)
		{
			st.insert(s[i]);
		}
    }
    cout << st.size()<<endl;
    for(auto it:st) cout << it<<" ";
}