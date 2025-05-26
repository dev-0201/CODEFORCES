#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
 
void solve() 
{
    int n,on=0,en=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
            en++;
        else
            on++;
    }
    if(on%2==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
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
