#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(auto & i:a){
            cin>>i;
        }
        int max_size = *max_element(a.begin(), a.end());
        int index=-1;
        for(int i=0;i<n;i++){
            if(a[i]==max_size){
                if((i>0&&a[i-1]<a[i])||(i<n-1 && a[i+1]<a[i])){
                    index=i+1;
                }
            }
        }
        cout<<index<<"\n";
    }
    return 0;
}
