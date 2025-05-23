#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

void solve() 
{
    int n,x;
    cin >>n>>x;
    vector<int>a(n),b(n-1);
    for(int i=0;i<n;i++)
        cin>>a[i];
    if(n==1)
    {
        cout<<max(a[0]-0,(x-a[n-1])*2)<< endl;
        return;
    }
    for(int i=1;i<n;i++)
        b[i-1]=a[i]-a[i-1];
    int m=*max_element(b.begin(),b.end());
    int s=a[0]-0;
    int e=(x-a[n-1])*2;

    cout << max({m,s,e}) << endl;
}

int main() 
{
    long long tc = 1;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}
