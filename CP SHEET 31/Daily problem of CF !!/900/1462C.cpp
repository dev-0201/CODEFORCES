#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

void solve() 
{
    int x, n = 9, ans = 0;
    cin >> x;
    if (x > 45) 
    {
        cout << -1 << endl;
    } 
    else 
    {
        while (x > n) 
        {
            ans++;
            x -= n;
            n--;
        }
        cout << x;
        while (ans--) cout << 9 - ans;
        cout << endl;
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--) solve();
    return 0;
}
