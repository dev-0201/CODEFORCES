#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int a, cnt = 0;
    cin >> a;
    int k[a];
    for (int i = 0; i < a; i++)
    {
        cin >> k[i];
        if (k[i] % 2 == 0)
        {
            cnt++;
        }
    }
    cout << min(cnt, a - cnt) << endl;
    return 0;
}
