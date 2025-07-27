#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

void solve() {
    int n;
    cin >> n;
    if (n % 2 != 0) n++;
    if (n < 6) n = 6;
    cout << (n * 5) / 2 << endl;
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
