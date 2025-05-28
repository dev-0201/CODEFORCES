#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
 
void solve() 
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    if(b>d)
        cout<<"-1"<<endl;

    else
    {
        if((a+d-b)<c)
            cout<<"-1"<<endl;
        else 
            cout<<2*(d-b)+a-c<<endl;
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
