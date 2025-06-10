#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

void solve() 
{
    int n, k;
    cin >> n >> k;
    int a[n];
    int c = 1;
    int m = 1;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    for(int i = 1; i < n; i++)
    {
        if(a[i] - a[i-1] <= k)
            c++;
        else 
            c = 1;
        m = max(m,c);
    }
    cout << n - m << endl;
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
