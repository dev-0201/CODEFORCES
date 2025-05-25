#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
 
void solve() 
{
    int n;
    cin>>n;
    int count=0;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==a[0])
            count++;
    }
    int b[n],c[n];
    if(count==n)
    {
        cout<<"-1"<<endl;
        return;
    }
    else
    {
        sort(a,a+n);
        int lb=0,lc=0;
        for(int i=0;i<n;i++)
            {
                if(a[0]==a[i])
                {
                    b[lb++]=a[i];
                }
                else
                {
                    c[lc++]=a[i];
                }
            }
            cout<<lb<<" "<<lc<<endl;
            for(int i=0;i<lb;i++)
            {
                cout<<b[i]<<" ";
            }
            cout<<endl;
            for(int i=0;i<lc;i++)
            {
                cout<<c[i]<<" ";
            }
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
