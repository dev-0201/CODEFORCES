#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

void solve() {
    int n;
    cin >> n;
    int counter = 0;
    int p;
    cin >> p;
    for (int i = 1; i < n; i++) {
        int q;
        cin >> q;
        if (abs(p - q) % 2 != 0) {
            counter = 1;
        }
        p = q;
    }
    if (counter == 0) cout << "YES" << endl;
    else cout << "NO" << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--) solve();
    return 0;
}
