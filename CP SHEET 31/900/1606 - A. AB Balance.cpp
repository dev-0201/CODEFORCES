#include <algorithm>
#include <iostream>
 
typedef long long ll;
using namespace std;
 
void solve() {
  string s;
  cin >> s;
  int n = s.length();
 
 
  if (n) { cout << s.back() + s.substr(1); }
}
 
int main() {
  ios::sync_with_stdio(0), cin.tie(0);
 
  int t;
  cin >> t;
  while (t--) {
    solve();
    cout << '\n';
  }
 
  return 0;
}
