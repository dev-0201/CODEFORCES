#include <bits/stdc++.h>
using namespace std;

void solve()
 {
   int n;
   cin>>n;
   vector<int>a(n);
   map<int,int>m;
   for(int i=0;i<n;i++)
   {
    cin>>a[i];
    m[a[i]]++;
  }
  int freq=0;
  for(auto it:m)
  {
    freq=max(freq,it.second);
  }
  int op=0;
  while(freq<n)
  {
    op++;
    if(n-freq>=freq)
    {
      op+=freq;
      freq*=2;
    }
    else
    {
      op+=n-freq;
      freq=n;
    }
  }
  cout<<op<<"\n";
 }


int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
