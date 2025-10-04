#include<bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define pb push_back
#define eb emplace_back
#define mp make_pair	
#define pii pair<int,int>
#define vi vector<int>
#define vii vector<pair<int,int>>
#define all(x) x.begin(), x.end()

#define int long long

void solve(){
	int n;
	scanf(" %lld",&n);
	vi a(n);
	for(int& i:a) scanf(" %lld",&i);
	int ans=0,cur=0;
	for(int i=0;i<2*n;i++){
		if(a[i%n])cur++;
		else cur=0;
		ans=max(ans,cur);
	}
	printf("%lld",ans);
}

signed main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t = 1;
	//cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
