#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
 
void solve() 
{
    int n;
    bool f;
    cin>>n;
    int a[n];
    int d[n-1];
    for(int i=0;i<n;i++)
        cin>>a[i];
    f=is_sorted(a,a+n);
    if(f==false)
    {
        cout<<"0"<<endl;
        return;
    }
    for(int i=1;i<n;i++)
        d[i-1]=a[i]-a[i-1];
    cout<<((*min_element(d,d+n-1))/2)+1<<endl;
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
