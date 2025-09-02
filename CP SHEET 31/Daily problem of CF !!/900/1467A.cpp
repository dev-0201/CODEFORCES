#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        ll m;
        cin >> m;

        string sol = "989";

        for(ll i = 0; i < m; i++) {
            sol.push_back(i % 10 + 48);
        }

        for(ll i = 0; i < m; i++) {
            cout << sol[i];
        }

        cout << '\n';
    }
}
