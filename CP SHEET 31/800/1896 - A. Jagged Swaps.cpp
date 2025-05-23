#include <bits/stdc++.h>
#define endl "\n"
#define int long long
using namespace std;

void solve() 
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    if(*min_element(a,a+n)!=a[0])
    {
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
}

signed main() 
{
    int tc=1;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}
