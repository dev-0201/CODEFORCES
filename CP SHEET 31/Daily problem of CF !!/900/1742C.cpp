#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

void solve() 
{
    char a[8][8];
    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 8; j++)
            cin >> a[i][j];
    }

    for(int i = 0; i < 8; i++)
    {
        int rc = 0;
        for(int j = 0; j < 8; j++)
        {
            if(a[i][j] == 'R')
                rc++;
            if(rc == 8)
            {
                cout << "R" << endl;
                return;
            }
        }
    }
    cout << "B" << endl;

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
