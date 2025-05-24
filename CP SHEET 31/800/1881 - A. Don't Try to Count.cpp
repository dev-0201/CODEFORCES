#include <bits/stdc++.h>
#define endl "\n"
#define int long long
using namespace std;

void solve() 
{
    int n,m;
    bool f=false;
    cin>>n>>m;
    string x,s;
    cin>>x>>s;
    for(int i=0;i<6;i++)
    {
        if(x.find(s) != string::npos)
        {
            cout<<i<<endl;
            f=true;
            break;
        }
        x+=x;
    }
    if(f==false)
        cout<<"-1"<<endl;
}

signed main() 
{
    int tc = 1;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}
