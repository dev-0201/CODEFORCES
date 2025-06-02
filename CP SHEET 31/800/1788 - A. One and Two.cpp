#include<bits/stdc++.h>
//#define int long long
#define endl "\n"
using namespace std;
 
void solve() 
{
    int n,c=0,ac=0;
    cin>>n;
    short int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==2)
            c++;
    }
    if(c==0)
        cout<<1<<endl;
    else if(c%2==1)
        cout<<-1<<endl;
    else 
    {
        for(int i=0;i<n;i++)
        {
            if(a[i]==2)
                ac++;
            if(ac*2==c)
            {
                cout<<i+1<<endl;
                return;
            }
            else if(ac*2>c)
            {
                cout<<-1<<endl;
                return;
            }
        }
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
 
