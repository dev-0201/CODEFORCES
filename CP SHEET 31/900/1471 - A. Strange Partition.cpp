#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

void solve() 
{
    int n, x;
    cin >> n >> x;

    vector<int> a(n);
    int totalSum = 0, maxSum = 0;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        totalSum += a[i];
        maxSum += (a[i] + x - 1) / x; 
    }

    int minSum = (totalSum + x - 1) / x;

    cout << minSum << " " << maxSum << endl;
}

signed main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    while(tc--)
        solve();
    return 0;
}
