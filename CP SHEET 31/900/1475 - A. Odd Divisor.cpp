#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

void solve() 
{
    int n;
    cin >> n;

    if(n % 2 == 1) {
        cout << "YES" << endl;
        return;
    }

    while(n > 1) {
        n /= 2;
        if(n % 2 == 1 && n > 1) {
            cout << "YES" << endl;
            return;
        }
    }

    cout << "NO" << endl;
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
