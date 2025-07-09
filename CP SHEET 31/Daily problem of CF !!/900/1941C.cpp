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

    int m_c = 0 , p_c = 0 , mp_c = 0;
    for(int i = 0; i < n-2; i++)
    {
        if(s.substr(i, 3) == "map") 
            m_c++;
        if(s.substr(i, 3) == "pie")
            p_c++;
        if(s.substr(i, 5) == "mapie")
            mp_c++;
    }
    cout << m_c + p_c - mp_c << endl;
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
