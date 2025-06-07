#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

void solve() 
{
    int a, b, n;
    cin >> a >> b >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    int total = b;
    for(int i = 0; i < n; i++)
        total += min(arr[i], a-1);
    cout << total << endl;
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
