#include <bits/stdc++.h>
using namespace std;

int main() {
 int t;
 cin>>t;
 while(t--){
  long long a,b,k;
  cin>>a>>b>>k;
  if(max(a,b)<=k){
    cout<<1<<endl;
    continue;
  }
  long long gcd = __gcd(a,b);
  long long x = a/gcd;
  long long y = b/gcd;
  
  
   if(max(x,y)<=k){
    cout<<1<<endl;
  }
  else{
    cout<<2<<endl;
  }
 }

}
