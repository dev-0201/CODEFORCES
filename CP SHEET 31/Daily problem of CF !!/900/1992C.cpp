#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++) {
        a[i] = i;
    }

    sort(a.begin() + 1, a.begin() + n + 1, greater<int>());
    sort(a.begin() + (n - m + 1), a.begin() + n + 1);

    for (int i = 1; i <= n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}
