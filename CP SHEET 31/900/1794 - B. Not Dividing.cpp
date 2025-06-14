#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    for(int i = 0; i < n; i++)
    {
        if(a[i] == 1)
            a[i]++;
    }
    for(int i = 1; i < n; i++)
    {
        if(a[i] % a[i-1] == 0)
            a[i]++;
    }
    for(int i = 0; i < n; i++)
        cout << a[i] <<" ";
    cout << endl;
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
