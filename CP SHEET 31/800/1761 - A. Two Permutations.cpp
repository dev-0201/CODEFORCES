#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
 
void solve() 
{
    int n,a,b;
    cin>>n>>a>>b;
    if((n-(a+b)>=2) || (n==a && n==b))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
 
signed main() 
{
    ios_base::sync_with_stdio(false) ; 
    cin.tie(NULL);
    int tc=1;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}
