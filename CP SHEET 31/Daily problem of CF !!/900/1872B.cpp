#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

void solve() {
    int n;
    cin >> n;
    int ans = 2 * 1e9;
    for (int i = 0; i < n; i++) {
        int d, s;
        cin >> d >> s;
        ans = min(ans, d + (s - 1) / 2);
    }
    cout << ans << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--) 
        solve();
    return 0;
}
