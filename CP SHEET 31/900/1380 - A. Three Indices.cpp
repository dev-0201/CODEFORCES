#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

void solve() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        int flag = 0, i = 0;
        for (i = 0; i < n - 2; i++) {
            if (v[i] < v[i + 1] && v[i + 1] > v[i + 2]) {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
            cout << "NO" << endl;
        else {
            cout << "YES" << endl;
            cout << i + 1 << " " << i + 2 << " " << i + 3 << endl;
        }
    }
}

signed main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    int tc = 1;
    // cin >> tc;
    while(tc--)
        solve();
    return 0;
}
