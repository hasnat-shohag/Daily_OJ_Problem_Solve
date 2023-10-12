#include<bits/stdc++.h>
const int N=100010;
const int INF=1e9;
int n,q,len,pre;
int l[N],r[N],b[N],vis[2][N],f[2][N][10],fa[N];
char s[N];
using namespace std;
void del(int p){
	r[l[p]]=r[p],l[r[p]]=l[p];
	len--;
	return;
}
int find(int x){
	return fa[x]==x?x:fa[x]=find(fa[x]);
}   
void unionn(int x,int y){
	int fx=find(x),fy=find(y);
	if(fx==fy) return;
	fa[fy]=fx;
	return;
}
void run(int &p,int &dir){
    int nxt;
	if(isdigit(s[p])){
		b[s[p]-'0']++;
		if(s[p]=='0') del(p);
		else s[p]--;
		nxt=(dir==0)?l[p]:r[p];
	}
	else{
		if(s[p]=='<')dir=0;
		else dir=1;
		nxt=(dir==0)?l[p]:r[p];
		if(p&&!isdigit(s[nxt]))del(p);
	}
    if(dir==1&&vis[1][nxt]==0){
		for(int i=0;i<10;i++){
			f[1][nxt][i]=b[i];
		}
		vis[1][nxt]=1;
	}
	if(dir==0){
		int j=find(nxt)+1;
		while(j<=p){
			vis[0][j]=1;
			for(int i=0;i<10;i++){
				f[0][j][i]=b[i];
			}
			unionn(j,j-1);
			j=find(j)+1;
		}
	}
	p=nxt;
	return;
}
int main(){
    cin>>n>>q;
	s[0]='>';
	scanf("%s",s+1);
	for(int i=1;i<=n;i++){
		fa[i]=i;
	}
	for(int i=0;i<=n;i++){
		if(i>0) l[i]=i-1;
		r[i]=i+1;
	}
	memset(f,0x3f,sizeof(f));
	int p=0,dir=1;
	int len=n;
	while(p<=n&&len)run(p,dir);
    while(q--){
		int l,r;
		cin>>l>>r;
		for(int j=0;j<10;j++){
			cout<<(vis[0][l]?min(f[0][l][j],f[1][r+1][j]):f[1][r+1][j])-f[1][l][j]<<" ";
		}
		cout<<endl;
	}
    return 0;
}