#include <bits/stdc++.h>
#define endl "\n"
#define int long long
using namespace std;

void solve() 
{
    int n,s=0;
    cin>>n;
    int a[n-1];
    for(int i=0;i<(n-1);i++)
        cin>>a[i];
    int c=accumulate(a,a+(n-1),s);
    if(c>0)
        cout<<"-"<<c<<endl;
    else
        cout<<abs(c)<<endl;
}

signed main() 
{
    int tc = 1;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}
