#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

void solve()
{
    string s;
    cin >> s;
    bool ok = false;

    for (int mask = 0; mask < 8; mask++)
    {
        int balance = 0;
        bool valid = true;

        for (char c : s)
        {
            if ((mask >> (c - 'A')) & 1)
                balance++;
            else
                balance--;

            if (balance < 0)
            {
                valid = false;
                break;
            }
        }

        if (valid && balance == 0)
        {
            cout << "YES" << endl;
            ok = true;
            break;
        }
    }

    if (!ok)
        cout << "NO" << endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int tc;
    cin >> tc;
    while (tc--)
        solve();
    
    return 0;
}
