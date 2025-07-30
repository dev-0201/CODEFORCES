#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

void solve() {
    int l, r, x;
    cin >> l >> r >> x;

    int ans = r / x + r % x;
    int m = (r / x) * x - 1;
    if (m >= l) {
        ans = max(ans, m / x + m % x);
    }

    cout << ans << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    cin >> tc;
    while (tc--) solve();

    return 0;
}
