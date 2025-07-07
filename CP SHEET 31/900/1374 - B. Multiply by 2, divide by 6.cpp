#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
 
void solve() 
{
    int n;
    cin>>n;
    int c2=0,c3=0;
    while(n>0 && n%3==0)
    {
        c3++;
        n/=3;
    }
    while(n>0 && n%2==0)
    {
        c2++;
        n/=2;
    }
    if(n>1 || c2>c3)
        cout<<"-1"<<endl;
    else
        cout<<c2+((c3-c2)*2)<<endl;
    
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
