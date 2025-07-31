#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

void solve() {
    int n, k, f, t, joy;
    int max_joy = -1e9;
    cin >> n >> k;
    while (n--) {
        cin >> f >> t;
        if (t > k) joy = f - (t - k);
        else joy = f;
        max_joy = max(max_joy, joy);
    }
    cout << max_joy << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    while (tc--)
        solve();
    return 0;
}
