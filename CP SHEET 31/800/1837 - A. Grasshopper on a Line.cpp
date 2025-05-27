#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
 
void solve() 
{
    int x,k;
    cin>>x>>k;
    if(x%k!=0)
        cout<<"1"<<endl<<x<<endl;
    else 
        cout<<"2"<<endl<<x-1<<" "<<"1"<<endl;
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
