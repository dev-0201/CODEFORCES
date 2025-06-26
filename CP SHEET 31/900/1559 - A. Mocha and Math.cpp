#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int a;
    cin>>a;
    vector<int>c;
    for(int j=0;j<a;j++){
      int y;
      cin>>y;
      c.push_back(y);
    }
    
    int ans=c[0];
    for(int i=1;i<a;i++){
      ans&=c[i];
    }
    cout<<ans<<endl;
  }
}
