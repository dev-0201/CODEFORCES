#include <bits/stdc++.h>
using namespace std;

#define int ll

typedef long long ll;

int n, a, sum, cnt, mn = 1e10;

int32_t main(){
    cin >> n;
    for (int i = 0; i < n; i ++){
        cin >> a;
        if (a & 1) mn = min(mn, a), cnt ^= 1;
        sum += a;
    }
    
    if (cnt) sum -= mn;
    cout << sum << '\n';
}
