#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int T,n,m,a[N];
int main(){
	cin>>T;
	while(T--){
		cin>>n>>m;int mx=0;
		for(int i=1;i<=n;i++)cin>>a[i],mx=max(mx,a[i]);
		char op;
		for(int l,r;m--;)cin>>op>>l>>r,l<=mx&&mx<=r&&(mx+=op=='+'?1:-1),cout<<mx<<' ';
		puts("");
	}
	return 0;
}
