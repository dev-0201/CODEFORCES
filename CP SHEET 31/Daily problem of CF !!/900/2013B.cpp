#include <iostream>
signed main() {
  int t;
  std::cin >> t;
  while(t--){
    int n;
    std::cin >> n;
    long long sum=0, x;
    for(int i=0;i<n;++i)
      std::cin >> x, sum += (i==n-2?-x:x);
    std::cout << sum << '\n';
  }
}
