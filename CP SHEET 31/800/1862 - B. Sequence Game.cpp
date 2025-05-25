#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long

void solve()
{
    int n,m;
        cin>>n;
        m=2*n;
        int b[n],a[m+1];
        for(int i=1;i<=n;i++)
        {
            cin>>b[i];
        }
        int j=1,i=1;
        while(j<=n)
        {
            if(j==1)
            {
                a[i]=b[j];
                
                i++;
            }
            else if(b[j]<b[j-1])
            {
                if(b[j]==1)
                {
                    a[i]=b[j];
                    i++;
                    a[i]=b[j];
                    i++;
                }
                else
                {
                    a[i]=b[j]-1;
                    i++;
                    a[i]=b[j];
                    i++;
                }
            }
            else
           {
                a[i]=b[j];
                i++;
           }
           j++;
        }
        cout<<i-1<<endl;
        for(int k=1;k<i;k++)
        {
            cout<<a[k]<<" ";
        }
        cout<<endl;
}

signed main()
{
    int tc=1;
    cin>>tc;
    while(tc--)
        solve();
    return 0;
}
