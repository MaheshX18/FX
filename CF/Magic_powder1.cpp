#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, k;
    cin >> n >> k;

    int arr1[n];
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    int arr2[n];
    for (int i = 0; i < n; i++) {
        cin >> arr2[i];
    }

    long long low = 0;
    long long high = 1000000000;
    long long units = 0;

    while (low <= high) {

        long long mid = (low + high) / 2;
        long long need = 0;

        for (int i = 0; i < n; i++) {
            long long total = 1LL * arr1[i] * mid;

            if (total > arr2[i]) {
                need = need + (total - arr2[i]);
            }
        }

        if (need <= k) {
            units = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    cout << units;
    return 0;
}
