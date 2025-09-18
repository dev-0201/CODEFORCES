#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int a, n, mn = INT_MAX;
    cin >> a;
    vector<int> k;
    for (int i = 0; i < a; i++)
    {
        int x;
        cin >> x;
        k.push_back(x);
        mn = min(mn, k[i]);
    }
    int count = 0;
    for (int i = 0; i < a; i++)
    {
        if (mn == k[i])
        {

            count++;
        }
        if (count > 1)
        {
            cout << "Still Rozdil" << endl;
            goto jay;
        }
    }
    for (int i = 0; i < a; i++)
    {
        if (k[i] == mn)
        {
            n = i + 1;
        }
    }

    cout << n << endl;
jay:;
    return 0;
}
