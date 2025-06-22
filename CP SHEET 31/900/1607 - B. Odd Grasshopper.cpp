#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

void solve() 
{
    int x_0, n;
    cin >> x_0 >> n;
    int rem = n % 4;
    int sum;
    if(rem == 0) 
        sum = 0;
    else if(rem == 1) 
        sum = -n;
    else if(rem == 2) 
        sum = 1;
    else 
        sum = n + 1;

    if(x_0 % 2 == 0)
        cout << x_0 + sum << endl;
    else 
        cout << x_0 - sum << endl;
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
