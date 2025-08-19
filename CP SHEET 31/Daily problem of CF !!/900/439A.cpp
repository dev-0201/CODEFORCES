#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve() {
    int n, d;
    cin >> n >> d;
    vector<int> t(n);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> t[i];
        sum += t[i];
    }
    if ((d - sum) < 0 || (sum + (10 * (n - 1)) > d)) {
        cout << -1 << endl;
        return;
    }
    cout << (d - sum) / 5 << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    // cin >> tc; // uncomment if multiple test cases
    while (tc--) {
        solve();
    }
    return 0;
}
