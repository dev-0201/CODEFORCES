#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

void solve() {
    int n, a, b, c, d;
    cin >> n >> a >> b >> c >> d;
    int L = n * (a - b), R = n * (a + b);
    if (R < c - d || c + d < L)
        cout << "No" << endl;
    else
        cout << "Yes" << endl;
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
