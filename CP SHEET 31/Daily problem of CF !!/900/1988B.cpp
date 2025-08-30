#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cntZero=0;
    int flag=0;
    int cntOne=0;
    for(int i=0;i<s.length();i++){
        if(flag==0 && s[i]=='0'){
            flag=1;
            cntZero++;
        }
        else if(s[i]=='1'){
            flag=0;
            cntOne++;
        }
    }
    if(cntOne>cntZero)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}

int main()
{
    int t;
    t=1;
    cin>>t;
    while(t--){
       solve();
    }
}
