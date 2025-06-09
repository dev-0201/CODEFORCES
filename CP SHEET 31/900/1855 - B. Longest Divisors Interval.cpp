#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    if(n % 2 != 0)
    {
        cout << 1 << endl;
        return; 
    }
    if(n % 3 != 0)
    {
        cout << 2 << endl;
        return;
    }
    for(int i = 1; i < 51; i++)
    {
        if(n % i != 0)
        {
            cout << i - 1 << endl;
            return;
        }
    }
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
