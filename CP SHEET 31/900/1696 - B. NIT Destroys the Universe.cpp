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
    
    int c = 0;

    for(int i = 0; i < n; i++)
    {
        if(a[i] == 0)
            c++;
    }

    bool f = 0;
    int l = 0;
    int r = n - 1;

    while(a[l] == 0)
        l++;
    while(a[r] == 0)
        r--;
        
    for(int i = l; i <= r; i++)
    {
        if(a[i] == 0)
            f = 1;
    }

    if(c == n)
        cout << 0 << endl;
    else if(f == 0)
        cout << 1 << endl;
    else 
        cout << 2 << endl;
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
