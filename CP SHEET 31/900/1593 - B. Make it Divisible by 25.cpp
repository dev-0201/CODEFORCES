#include <bits/stdc++.h>
using namespace std;

using ll = long long int;
using vi = vector <int>;
using pii = pair <int,int>;

void solve () {
  string n; cin >> n;
  ll counter = 0;
  vi a;
  
  for (int i = n.size()-1; i > 0; i--) {
      if (n[i]=='0') {
          int j = i - 1;
          int temp = counter;
          while (j >= 0 && n[j]!= '5' && n[j]!= '0') {
              temp++;
              j--;
          }
          if (j>=0) {
              a.push_back(temp);
          }
      }
      else if (n[i]=='5') {
          int j = i - 1;
          int temp = counter;
          while (j >= 0 && n[j]!= '2' && n[j]!= '7') {
              temp++;
              j--;
          }
          if (j>=0) {
              a.push_back(temp);
          }
      }
      counter++;
  }
  auto mn = min_element(a.begin(), a.end());
  cout << *(mn) << '\n';
}

int main () {

  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  int t; cin >> t;
  while (t--) {
      solve();
  }
  return 0;
}
