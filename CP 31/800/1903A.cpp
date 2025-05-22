#include <bits/stdc++.h>
#define endl "\n"
#define int long long
using namespace std;

void solve() 
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    if(is_sorted(a,a+n) || k>1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}

signed main() 
{
    int tc=1;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}