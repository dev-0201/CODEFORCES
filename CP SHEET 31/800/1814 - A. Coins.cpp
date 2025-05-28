#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
 
void solve() 
{
    int n,k;
    cin>>n>>k;
    if(n%2==0)
        cout<<"YES"<<endl;
    else 
    {
        if(k%2!=0)
            cout<<"YES"<<endl;
        else 
            cout<<"NO"<<endl;
    }
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
