#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve() {
    int a, b, c;
    cin >> a >> b >> c;
    int k = 0;
    if (a % b != 0) k++;
    if (a - (a / b + k) > c) 
        cout << "Yes" << endl;
    else 
        cout << "No" << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}
