#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> x(n);
    for (int i = 0; i < n; i++) cin >> x[i];

    for (int i = 0; i < n; i++) {
        int mn1 = i - 1, mn2 = i + 1;
        int mx1 = 0, mx2 = n - 1;

        if (i == 0) {
            mx1++;
            mn1 += 2;
        }
        if (i == n - 1) {
            mx2--;
            mn2 -= 2;
        }

        int min_val = min(abs(x[i] - x[mn1]), abs(x[mn2] - x[i]));
        int max_val = max(abs(x[i] - x[mx1]), abs(x[mx2] - x[i]));

        cout << min_val << " " << max_val << endl;
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    // cin >> tc;
    while (tc--) solve();
    return 0;
}
