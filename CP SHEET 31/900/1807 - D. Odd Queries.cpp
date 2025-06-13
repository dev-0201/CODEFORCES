#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define no cout << "NO" << endl
#define yes cout << "YES" << endl
#define floop(i, k, n) for (int i = k; i < n; i++)

void solve() {
    int n, m;
    cin >> n >> m;
    int arr[n + 1] = {0}, a[m][3];

    floop(i, 1, n + 1) {
        cin >> arr[i];
        arr[i] += arr[i - 1];
    }

    floop(i, 0, m) {
        cin >> a[i][0] >> a[i][1] >> a[i][2];
    }

    floop(j, 0, m) {
        int sum = arr[a[j][0] - 1] + arr[n] - arr[a[j][1]] + (a[j][1] - a[j][0] + 1) * a[j][2];
        if (sum % 2 != 0) {
            yes;
        } else {
            no;
        }
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }

    return 0;
}
