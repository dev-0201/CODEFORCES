#include <bits/stdc++.h>
#define endl "\n"
#define int long long
using namespace std;

void solve() 
{
    int a;
    cin>>a;
    if((a+1)%3==0 || (a-1)%3==0)
        cout<<"First"<<endl;
    else 
        cout<<"Second"<<endl;
}

signed main() 
{
    int tc=1;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}
