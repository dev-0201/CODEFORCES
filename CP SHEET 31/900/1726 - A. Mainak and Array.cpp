#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

void solve() 
{
    int n;
	cin >> n;

	int A[n];
	int ans = -1000000007;

	for(int i = 0; i < n; ++i)
		cin >> A[i];

	for(int i = 0; i < n; ++i)
		ans = max(ans, A[(i - 1 + n) % n] - A[i]);

	for(int i = 1; i < n; ++i)
		ans = max(ans, A[i] - A[0]);

	for(int i = 0; i < n - 1; ++i)
		ans = max(ans, A[n - 1] - A[i]);

	cout << ans << endl;
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
