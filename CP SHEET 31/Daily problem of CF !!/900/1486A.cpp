#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;
    while (tc--) {
        int n; cin >> n;

        int cur = 0;
        bool flag = false;

        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            cur += x;

            if (i * (i+1) / 2 > cur)
                flag = true;
        }

        cout << (flag ? "NO" : "YES") << endl;
    }
}
