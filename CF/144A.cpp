#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    // Find leftmost maximum
    int maxVal = *max_element(a.begin(), a.end());
    int posMax = 0;
    for (int i = 0; i < n; i++){
        if (a[i] == maxVal) {
            posMax = i;
            break;
        }
    }

    // Find rightmost minimum
    int minVal = *min_element(a.begin(), a.end());
    int posMin = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (a[i] == minVal) {
            posMin = i;
            break;
        }
    }

    int ans;
    if (posMax > posMin)
        ans = posMax + (n - 1 - posMin) - 1;
    else
        ans = posMax + (n - 1 - posMin);

    cout << ans << endl;
    return 0;
}
