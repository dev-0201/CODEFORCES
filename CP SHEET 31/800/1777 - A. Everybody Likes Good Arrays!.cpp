#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

void solve() 
{
    int n,c=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n-1;i++)
    {
        if((a[i]%2)==(a[i+1]%2))
            c++;
    }
    cout<<c<<endl;
}
 
signed main() 
{
    int tc=1;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}
