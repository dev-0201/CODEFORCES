#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long a, b;
    cin >> a >> b;

    if(a == b) {
        cout<<0<<" "<<0<<endl;
        return;
    }

    long long ans = abs(a-b);

    long long steps = min(a%ans, ans - a%ans);

    cout<<ans<<" "<<steps<<endl;
}


int main() {
    int t;
    cin>>t;

    while(t--) solve();
}
