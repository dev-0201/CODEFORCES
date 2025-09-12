#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;
 
        if (b >= a) {
            cout << b << endl;
            continue;
        }
 
        if (c <= d) {
            cout << -1 << endl;
            continue;
        }
 
        a -= b;
        int dif = c - d;
        cout << b + ((a + dif - 1) / dif) * c << endl;
    }
    return 0;
}
