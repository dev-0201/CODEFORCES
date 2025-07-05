#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    ll n,k;
    cin >> n >> k;
    vector<ll> v;
    for(ll i=0;i<n*k;i++){
        ll x; 
        cin >> x;
        v.push_back(x);
    }
    ll init = (n*k-1) - (n-(n+1)/2);
    ll s = 0;
    ll j=0;
    for(ll i=init;j<k;i-=(n-(n+1)/2)+1){
        s+=v[i];
        j++;
    }
    
    cout << s << endl;
}
int main() {
    ll tt;
    cin >> tt;
    while(tt--){
        solve();
    }
}
