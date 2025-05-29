#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
 
void solve() 
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int l=0,r=n-1,ans=n;
    while(s[l] != s[r] && ans>0)
    {
        l++;
        r--;
        ans-=2;
    }
    cout<<ans<<endl;
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
