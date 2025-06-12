#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    int k = 0;
    for(int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;
        k =__gcd(k, abs(a - i));
    }
    cout << k << endl;
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
