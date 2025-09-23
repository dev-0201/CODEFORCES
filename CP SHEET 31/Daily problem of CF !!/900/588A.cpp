#include <bits/stdc++.h>
using namespace std;


void solve()
{
int n;
cin>>n;
int a=INT_MAX;
int ans=0;
for(int i=0;i<n;i++)
{
  int m,p;
cin>>m>>p;
a=min(a,p);
ans=ans+a*m;
}
cout<<ans<<"\n";


}
 

int main()
{
      int t=1;
     // cin>>t;
      while(t--)
      {
        solve();
      }
}
