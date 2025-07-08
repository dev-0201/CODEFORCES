//https://codeforces.com/problemset/problem/1971/C

#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

void solve() 
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if((a<c && c<b && b<d) || (a<d && d<b && b<c) || (b<c && c<a && a<d) || (b<d && d<a && a<c) || (c<a && a<d && d<b) || (c<b && b<d && d<a) || (d<a && a<c && c<b) || (d<b && b<c && c<a))
    {
        cout << "YES" << endl;
        return;
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
