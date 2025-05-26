#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
 
void solve() 
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a==b && c%2!=0)
        cout<<"First"<<endl;
    else if(a==b && c%2==0)
        cout<<"Second"<<endl;
    else if(a<b)
        cout<<"Second"<<endl;
    else
        cout<<"First"<<endl;
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
