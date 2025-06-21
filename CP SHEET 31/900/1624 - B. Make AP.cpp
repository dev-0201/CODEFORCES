#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

void solve() 
{
    int a, b, c;
    cin >> a >> b >> c;

    bool ans = false;

    int new_a = 2 * b - c;
    if (new_a > 0 && new_a % a == 0) 
        ans = true;

    int new_b = (a + c) / 2;
    if ((a + c) % 2 == 0 && new_b > 0 && new_b % b == 0) 
        ans = true;

    int new_c = 2 * b - a;
    if (new_c > 0 && new_c % c == 0) 
        ans = true;

    cout << (ans ? "YES" : "NO") << endl;
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
