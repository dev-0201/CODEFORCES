#include <bits/stdc++.h>
using namespace std;
void solve()
{
 int n;
 cin>>n;
 string s,d;
 cin>>s;

 for(int i=0;i<n;i++)
 {
  if((n-i)%2==1)
  {
    d=d+s[i];
  }
  else
  {
    d=s[i]+d;
  }
 }
 cout<<d<<"\n";
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
