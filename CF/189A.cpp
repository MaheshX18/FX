#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b, c;
    cin >> n >> a >> b >> c;

    int maxCuts = -1;
    for (int i = 0; i <= n / a; ++i) {
        for (int j = 0; j <= n / b; ++j) {
            int remainingLength = n - (i * a + j * b);
            if (remainingLength < 0) {
                continue;
            }
            if (remainingLength % c == 0) {
                int k = remainingLength / c;
                int totalCuts = i + j + k;
                maxCuts = max(maxCuts, totalCuts);
            }
        }
    }
    cout << maxCuts << endl;
    
    return 0;
}