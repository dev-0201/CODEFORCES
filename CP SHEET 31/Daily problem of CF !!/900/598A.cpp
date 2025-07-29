#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

void solve() {
    int n;
    cin >> n;

    int total_sum = n * (n + 1) / 2;
    int power_sum = 0;

    for(int i = 1; i <= n; i *= 2) {
        power_sum += i;
    }

    cout << total_sum - 2 * power_sum << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    while(tc--)
        solve();
    return 0;
}
