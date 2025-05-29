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
    {
        cin>>a[i];
        c^=a[i];
    }
    if(n%2)
        cout<<c<<endl;
    else if(n%2==0 && c==0)
        cout<<"1"<<endl;
    else 
        cout<<"-1"<<endl;
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
