#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

void solve()
{
    int n;
    cin>>n;
    set<int> a;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        a.insert(abs(x));
    }
    cout<<*(a.begin());     
}
signed main()
{
    int tt=1;
    //cin>>tt;
    while(tt--)
        solve();
}
