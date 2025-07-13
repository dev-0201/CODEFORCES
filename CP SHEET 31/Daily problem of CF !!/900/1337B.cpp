#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

void solve() {
    int x, n, m;
    cin >> x >> n >> m;
    while (n-- && x > 20)
        x = (x / 2) + 10;
    while (m--) 
        x -= 10;
    if (x <= 0)
        cout << "YES" << endl;
    else 
        cout << "NO" << endl;
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
