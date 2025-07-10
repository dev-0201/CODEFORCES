#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

void solve() {
    int n, count = 0;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        int divisors = 0;
        int x = i;
        for (int p = 2; p <= x; ++p) {
            if (x % p == 0) {
                ++divisors;
                while (x % p == 0) x /= p;
            }
        }
        if (divisors == 2) ++count;
    }
    cout << count << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    while (tc--) solve();
    return 0;
}
