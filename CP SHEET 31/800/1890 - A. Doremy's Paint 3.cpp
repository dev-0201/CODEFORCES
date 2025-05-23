#include <bits/stdc++.h>
#define endl "\n"
#define int long long
using namespace std;

void solve() 
{
    int n;
    cin>>n;
    int a[n];
    set<int> s;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        s.insert(a[i]);
    }
    if(s.size()>2)
    {
        cout<<"NO"<<endl;
        return;
    }
    else
    {
        int c1=1,c2=0;
        for(int i=1;i<n;i++)
        {
            if(a[i]==a[0])
                c1++;
            else
                c2++;
        }
        if(c1==n/2 ||c2==n/2 || c1==n)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }

}

signed main() 
{
    int tc=1;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}
