#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

void solve() {
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());
    vector<int> prefix(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        prefix[i] = prefix[i - 1] + v[i - 1];
    }

    while (q--) {
        int x, y;
        cin >> x >> y;
        int i = n - x;
        int j = i + y;
        cout << prefix[j] - prefix[i] << endl;
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    // cin >> tc; // Uncomment if multiple test cases are needed
    while (tc--)
        solve();
    return 0;
}
