#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

void solve() 
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    map <char, int> mp;
    for(auto c:s)
        mp[c]++;
    int odd=0;
    for(auto it:mp)
    {
        int fre = it.second;
        if(fre%2)
            odd++;
    }
    if(k < odd-1) 
        cout << "No" << endl;
    else 
        cout << "Yes" << endl;
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
