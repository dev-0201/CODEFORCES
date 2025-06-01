#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
 
void solve() 
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    if(a[0]==a[n-1])
        cout<<"NO"<<endl;
    else 
    {
        cout<<"YES"<<endl;
        cout<<a[n-1]<<" "<<a[0]<<" ";
        for(int i=1;i<n-1;i++)
            cout<<a[i]<<" ";
        cout<<endl;
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
 
