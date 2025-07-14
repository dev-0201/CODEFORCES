#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

void solve() 
{
    int n, b, d;
    int s = 0, c = 0;
    cin >> n >> b >> d;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];

    for(int i = 0; i < n; i++)
    {
        if(a[i] <= b)
        {   
            s += a[i];
            if(s > d)
            {
                c++;
                s = 0;
            }
        }
    }
    cout << c << endl;
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
