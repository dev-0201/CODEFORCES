#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{	
   int n;
   cin>>n;
   int q[100000];
   for(int i=1;i<=n;i++)
   {
    q[i]=0;
   }
   for(int i=1;i<=n;i++)
   {
    int x;
    cin>>x;
    q[x]++;
   }
   for(int i=1;i<=n;i++)
   {
    if(q[i]%2==1)
    {
      cout<<"YES"<<"\n";
      return;
    }
   }
   cout<<"NO"<<"\n";
}
int main()
{
    int t;
   	cin>>t;
    while(t--)
    {
        solve();
    }
}
