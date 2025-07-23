#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

void solve() {
    int n, f, a, b;
    cin >> n >> f >> a >> b;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int ans = min((v[0] - 0) * a, b);
    for(int i = 1; i < n; i++) {
        ans += min((v[i] - v[i - 1]) * a, b);
    }
    if(ans < f)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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
