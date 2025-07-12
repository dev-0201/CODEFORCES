#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

void solve() 
{
    int n, m;
    cin >> n;
    string s;
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++) 
    {
        cin >> m;
        s += char('a' + a[m]);
        a[m]++;
    }
    cout << s << endl;
}

signed main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--) 
        solve();
    return 0;
}
