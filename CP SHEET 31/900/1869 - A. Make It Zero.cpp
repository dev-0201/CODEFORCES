#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

void solve() 
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    if(n%2==0)
    {
        cout<<"2"<<endl;
        cout<<"1"<<" "<<n<<endl;
        cout<<"1"<<" "<<n<<endl;
    }
    else
    {
        cout<<"4"<<endl;
        cout<<"1"<<" "<<n-1<<endl;
        cout<<"1"<<" "<<n-1<<endl;
        cout<<n-1<<" "<<n<<endl;
        cout<<n-1<<" "<<n<<endl;
    }
}   

signed main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    while(tc--)
        solve();
    return 0;
}
