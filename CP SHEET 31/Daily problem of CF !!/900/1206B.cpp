#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> a(n);
    long long cost = 0; 
    int neg_count = 0; 
    int zero_count = 0; 

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] > 1) {
            cost += a[i] - 1; 
        } else if (a[i] < -1) {
            cost += -1 - a[i]; 
            neg_count++;       
        } else if (a[i] == 0) {
            cost += 1; 
            zero_count++;
        } else if (a[i] == -1) {
            neg_count++; 
        }
    }
    if (neg_count % 2 != 0 && zero_count == 0) {
        cost += 2; 
    }

    cout << cost << endl;
    return 0;
}
