#include <bits/stdc++.h>
#define endl "\n"
#define int long long
using namespace std;

void solve() 
{
    int a, b = 0, d = 0, t = 0;
    cin >> a;
    string s;
    cin >> s;
    
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '.')
            d++;
        else if (s[i] == '#')
            b++;

        if (i <= s.size() - 3 && s[i] == '.' && s[i + 1] == '.' && s[i + 2] == '.')
            t++;
    }
    if(d==1)
    {
        cout<<"1"<<endl;
        return;
    }
    else if (a == d || t >= 1)
    {
        cout << "2" << endl;
        return;
    }
    else if (a == b)
    {
        cout << "0" << endl;
        return;
    }
    else if (a > d)
    {
        cout << d << endl;
        return;
    }
}

signed main() 
{
    int tc = 1;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}
