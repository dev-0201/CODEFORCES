#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 0, max = 0;
    for (int i = 1; i < n; i++) 
    {
        if (s[i] == s[i - 1]) 
        {
            ans++;
            if (ans > max) max = ans;
        }
        else ans = 0;
    }
    cout << max + 2 << endl;
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
