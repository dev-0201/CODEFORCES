#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
   
long long n;
cin>>n;
long long x = 10;
vector<long long>v;
while((x+1)<=n){
if((n%(x+1)) ==0){
    v.push_back(n/(x+1));
}
x*=10;
}
if(v.empty()){
    cout<<0<<endl;
    continue;
}

sort(v.begin(),v.end());
cout<<v.size()<<endl;

    for(auto i : v){
        cout<<i<<" ";
    }

cout<<endl;
    }
}
