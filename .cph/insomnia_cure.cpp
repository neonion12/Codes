#include <bits/stdc++.h>
using namespace std;

int main() {
    int k, l, m, n, d, c = 0;
    cin >> k >> l >> m >> n >> d;
    
    // Boolean array to keep track of damaged dragons
    bool damaged[d+1] = {false};
    
    for (int i = k; i <= d; i += k) {
        damaged[i] = true;
    }
    for (int i = l; i <= d; i += l) {
        damaged[i] = true;
    }
    for (int i = m; i <= d; i += m) {
        damaged[i] = true;
    }
    for (int i = n; i <= d; i += n) {
        damaged[i] = true;
    }
    
    // Count the number of damaged dragons
    for (int i = 1; i <= d; i++) {
        if (damaged[i]) {
            c++;
        }
    }
    
    cout << c << endl;
    return 0;
}
