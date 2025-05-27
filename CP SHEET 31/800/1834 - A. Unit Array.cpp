#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
 
void solve() 
{
    int n;
    cin>>n;
    int n1=0,p1=0,s=0;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>0)
            p1++;
        else
            n1++;
    }
    while(n1%2 || n1>p1)
    {
        s++;
        n1--;
        p1++;
    }
    cout<<s<<endl;
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
