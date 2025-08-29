   #include <bits/stdc++.h>
   using namespace std;
   
   int main(){
  int t;
  cin>>t;
  while(t--){
  long long int n;
  int x;
  cin>>n>>x;
  vector<int>v;
  if(x==n){
    for(int i=0;i<n;i++){
     v.push_back(i);
    }
  }
  else{
    for(int i=0;i<n;i++){
      if(i==x)continue;
      v.push_back(i);
    }
v.push_back(x);
  }
for(int i : v){
  cout<<i<<" ";
}
 cout<<endl; 
}
   
   
}
