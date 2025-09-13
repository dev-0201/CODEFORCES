#include <bits/stdc++.h>
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
    sort(a, a+n);
    int c = 1;
    for(int i = 1; i < n; i++)
    {
        if(a[0]==a[i])
            c++;
        else break;
    }

    int e = 1;
    for(int i = n-2; i >= 0; i--)
    {
        if(a[i]==a[n-1])
            e++;
        else break;
    }
    int ans = 0;
    if(a[0]==a[n-1])
        ans = n*(n-1);
    else
        ans = 2*c*e;

    cout << ans << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--) solve();
    return 0;
}
