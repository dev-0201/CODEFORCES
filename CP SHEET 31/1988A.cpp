#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    int cnt = 0;
    if (n == 1)
    {
        cout << 0 << endl;
        return;
    }
    else
    {
        int var=n-(k-1);
        int steps=0;
        while(n>=k)
        {
            n=var;
            steps++;
            var=n-k+1;
        }
        if(n!=1)
        {
            steps++;
        }
        cout<<steps<<endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
