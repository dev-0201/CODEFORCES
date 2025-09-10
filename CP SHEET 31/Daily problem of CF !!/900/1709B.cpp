#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, m;
    cin >> n >> m;
    vector<long long> s(n);
    for (long long i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    vector<long long> dp(n, 0);
    vector<long long> dp2(n, 0);
    for (long long i = 1; i < n; i++)
    {
        dp[i] += dp[i - 1];
        if (s[i] < s[i - 1])
        {
            dp[i] += s[i - 1] - s[i];
        }
    }
    for (long long i = n - 2; i >= 0; i--)
    {
        dp2[i] += dp2[i + 1];
        if (s[i] < s[i + 1])
        {
            dp2[i] += s[i+1] - s[i];
        }
    }
    for(long long i = 0;i<m;i++)
    {
        long long a;
        long long b;
        cin>>a>>b;
        if(a < b)
        {
            cout<<dp[b - 1] - dp[a - 1]<<endl;
        }
        else
        {
            cout<<dp2[b -1] - dp2[a - 1]<<endl;
        }
    }
    return 0;
}
