#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

void solve() 
{
    string s;
    cin >> s;
    int count = 0;
    int i = 0;

    while (s.length() >= 2 && i < s.length() - 1) {
        if ((s[i] == '0' && s[i + 1] == '1') || (s[i] == '1' && s[i + 1] == '0')) {
            s.erase(i, 2);
            count++;
            if (i > 0) i--;
        } else {
            i++;
        }
    }

    if (count % 2 == 0)
        cout << "NET" << endl;
    else
        cout << "DA" << endl;
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
