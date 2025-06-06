#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

void solve() 
{
    int n, k, x;
    cin >> n >> k >> x;
    int low = ((k * (k + 1)) / 2);
    int high = (n * (n + 1) / 2) - (((n - k) * (n - k + 1)) / 2);
    if(low <= x && high >= x)
        cout << "YES" << endl;
    else 
        cout << "NO" << endl;
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
